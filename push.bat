@echo off
setlocal
chcp 65001 >nul
cd /d D:\code\exo-h723

set HTTP_PROXY=http://127.0.0.1:7890
set HTTPS_PROXY=http://127.0.0.1:7890

echo ============================================
echo  Pushing exo-h723 to GitHub
echo  Repo: https://github.com/dxiaooo025-glitch/Exo_control
echo ============================================
echo.
echo A browser window will open for GitHub login.
echo If it does not, the console will ask for username/password.
echo Use your GitHub username and a Personal Access Token as password.
echo.

git -c http.proxy=http://127.0.0.1:7890 push -u origin main

echo.
echo exit code: %errorlevel%
echo.
pause
