

CC=csc.exe


EXT=cs
SRCDIR=src
UTILDIR=$(SRCDIR)\\util
SRC=$(SRCDIR)\\*.cs $(UTILDIR)\\*.cs

LIBDIR=lib
LIBIODIR=$(LIBDIR)\\io
LIB=$(LIBIODIR)\\*.cs


OUTDIR=bin
NAME=$(OUTDIR)\\main.exe

build:
	$(CC) /out:$(NAME) /recurse:$(SRCDIR)\\*.cs /recurse:$(LIBDIR)\\*.cs

run:
	$(NAME)

clean:
	del bin\*.exe
