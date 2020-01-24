
set file=hello

set outdir=bin
set name=%outdir%\%file%.exe

set srcdir=src
set srcfile=%srcdir%\%file%.cpp

set libdir=lib
set includedir=include


mkdir bin

g++ -o %name% %srcfile% -w -O2 -mthreads  -DHAVE_W32API_H -D__WXMSW__   -DNDEBUG    -D_UNICODE  -I.\%libdir%\gcc_dll\mswu -I.\%includedir%  -W -Wall -I. -DWXUSINGDLL  -DNOPCH   -Wno-ctor-dtor-privacy  -std=gnu++11  -mthreads -L.\%libdir%\gcc_dll -Wl,--subsystem,windows -mwindows    -lwxmsw30u_adv  -lwxmsw30u_core  -lwxbase30u    -lwxtiff -lwxjpeg -lwxpng   -lwxzlib -lwxregexu -lwxexpat  -lkernel32 -luser32 -lgdi32 -lcomdlg32 -lwinspool -lwinmm -lshell32 -lcomctl32 -lole32 -loleaut32 -luuid -lrpcrt4 -ladvapi32 -lwsock32 -lwininet

rem copy .\%libdir%\gcc_dll\*.dll %outdir% 



