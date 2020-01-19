

CC= javac
RR=java

MAINDIR=src
MAINCLASS=Mainx
EXT=java
EXTOUT=class
MAIN=$(MAINDIR)/$(MAINCLASS).$(EXT)

CP=.;lib;src

OUTDIR=bin
NAME=$(OUTDIR)/$(MAINDIR)/$(MAINCLASS).$(EXTOUT)

build:
	$(CC) -cp "$(CP)" -d "$(OUTDIR)" $(MAIN)


run:
	$(RR) -cp "$(CP);$(OUTDIR)" $(MAINDIR).$(MAINCLASS)

clean:
	rmdir /q /s $(OUTDIR)\\$(MAINDIR)
