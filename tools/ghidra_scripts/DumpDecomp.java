import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;

import java.io.File;
import java.io.PrintWriter;

public class DumpDecomp extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args[0]);
        outDir.mkdirs();

        DecompInterface ifc = new DecompInterface();
        ifc.toggleCCode(true);
        ifc.toggleSyntaxTree(true);
        if (!ifc.openProgram(currentProgram)) {
            println("decompiler open failed");
            return;
        }

        FunctionManager fm = currentProgram.getFunctionManager();
        StringBuilder index = new StringBuilder();
        int n = 0, fail = 0;

        for (Function f : fm.getFunctions(true)) {
            if (monitor.isCancelled()) break;
            String c;
            try {
                DecompileResults res = ifc.decompileFunction(f, 60, monitor);
                if (res != null && res.getDecompiledFunction() != null) {
                    c = res.getDecompiledFunction().getC();
                } else {
                    c = "// decompile failed";
                    fail++;
                }
            } catch (Exception e) {
                c = "// error: " + e;
                fail++;
            }
            String name = f.getName().replaceAll("[^A-Za-z0-9_.-]", "_");
            File fo = new File(outDir, String.format("%08x_%s.c", f.getEntryPoint().getOffset(), name));
            try (PrintWriter pw = new PrintWriter(fo, "UTF-8")) {
                pw.println(c);
            }
            index.append(String.format("0x%08X\t%s\t%d\t%d%n",
                    f.getEntryPoint().getOffset(), f.getName(), f.getBody().getNumAddresses(), c.length()));
            n++;
        }
        try (PrintWriter pw = new PrintWriter(new File(outDir, "index.tsv"), "UTF-8")) {
            pw.print(index);
        }
        println("DONE functions=" + n + " failed=" + fail + " out=" + outDir);
        ifc.dispose();
    }
}
