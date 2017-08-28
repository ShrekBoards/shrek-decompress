CC=gcc
CFLAGS=-Wall -Werror -pedantic
BINDIR=bin
INCDIR=include
LIBDIR=lib
DISDIR=dist
BIN=shrek_decompress_file
LIB=libshrek_decompress.a
DIS=libshrek_decompress.tar.gz

all: $(BIN) $(LIB)

$(LIB): shrek_decompress.h shrek_decompress.c
	mkdir -p $(LIBDIR)
	mkdir -p $(INCDIR)
	$(CC) $(CFLAGS) -c shrek_decompress.c
	ar -cvq $(LIBDIR)/$(LIB) shrek_decompress.o -o $(LIBDIR)/$(LIB)
	cp shrek_decompress.h $(INCDIR)

$(BIN): $(LIB) shrek_decompress_file/main.c
	mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) shrek_decompress_file/main.c -L$(LIBDIR) -lshrek_decompress -o $(BINDIR)/$(BIN)

clean:
	rm -f shrek_decompress.o
	rm -f $(LIBDIR)/$(LIB)
	rm -f $(INCDIR)/shrek_decompress.h
	rm -f $(BINDIR)/$(BIN)
	rm -f $(DISDIR)/$(DIS)
	rmdir $(LIBDIR)
	rmdir $(INCDIR)
	rmdir $(BINDIR)
	rmdir $(DISDIR)

dist: $(BIN) $(LIB)
	mkdir -p libshrek_decompress
	cp -r $(INCDIR) $(LIBDIR) $(BINDIR) libshrek_decompress
	mkdir -p $(DISDIR)
	tar -czf $(DISDIR)/$(DIS) libshrek_decompress
	rm -r libshrek_decompress

install:
	mkdir -p /usr/local/lib
	mkdir -p /usr/local/include
	cp -r $(LIBDIR)/$(LIB) /usr/local/lib/
	cp -r $(INCDIR)/shrek_decompress.h /usr/local/include/

uninstall:
	rm -f /usr/local/lib/$(LIB)
	rm -f /usr/local/include/shrek_decompress.h
