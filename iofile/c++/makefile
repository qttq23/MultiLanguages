
CC=g++
EXT=cpp

MAINDIR=src
LIBDIR=lib
LIBPACK=io iofile
LIBPACKDIR=$(patsubst %,$(LIBDIR)/%/*.$(EXT),$(LIBPACK))
LIST=$(MAINDIR)/*.$(EXT) $(LIBPACKDIR)


OUTDIR=bin
NAME=$(OUTDIR)/main.exe

.PHONY: build run clean

build:
	$(CC) -I $(LIBDIR) -o $(NAME) $(LIST)


run:
	$(NAME)

