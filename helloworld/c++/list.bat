@echo off
set list=
for /f "tokens=*" %%F in ('dir /b /s /a:-d %~1') do call set list=%%list%% "%%F"

echo expanded_list is: 
echo %list%