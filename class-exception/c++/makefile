
CC=g++
EXT=cpp

MAINDIR=src
LIBDIR=lib
LIBPACK=io iofile
LIBPACKDIR=$(patsubst %,$(LIBDIR)/%/*.$(EXT),$(LIBPACK))
LIST=$(MAINDIR)/*.$(EXT) $(LIBPACKDIR)
INCLUDEDIR=include

OUTDIR=bin
NAME=$(OUTDIR)/main.exe

.PHONY: build run clean

build:
	$(CC) -I$(LIBDIR) -I$(INCLUDEDIR) -o $(NAME) $(LIST) 


run:
	$(NAME)

