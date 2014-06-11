IDIR =../include
CC=gcc
CFLAGS= -g -lcunit -I$(IDIR) 

ODIR = ../obj
LDIR = ../lib

_DEPS = unidade.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o combat.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~

