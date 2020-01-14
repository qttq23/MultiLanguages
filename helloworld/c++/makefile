
# version 5

CC=g++


OUTDIR = bin
NAME = $(OUTDIR)\\main.exe

SRCDIR = src
SRC = $(SRCDIR)\\*.cpp

LIBDIR = lib
LIB = $(LIBDIR)\\*.cpp

HEADERDIR=-I$(LIBDIR)
EXLIBS = -lm	# math library

	

$(NAME):
	list "$(SRC) $(LIB)"
	g++ -o $@ $(list) $(HEADERDIR) $(EXLIBS)


clean:
	rmdir /q /s $(LODIR) $(SODIR)
	del $(OUTDIR)/*.exe

run:
	$(NAME)


