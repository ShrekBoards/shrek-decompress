CC=gcc
CFLAGS=-Wall -Werror -pedantic
BINDIR=bin
INCDIR=include
LIBDIR=lib
BIN=shrek_decompress_file
LIB=libshrek_decompress.so

all: $(BIN) $(LIB)

$(LIB): shrek_decompress.h shrek_decompress.c
	mkdir -p $(LIBDIR)
	mkdir -p $(INCDIR)
	$(CC) $(CFLAGS) -c -fpic shrek_decompress.c
	$(CC) -shared shrek_decompress.o -o $(LIBDIR)/$(LIB)
	cp shrek_decompress.h $(INCDIR)

$(BIN): $(LIB) shrek_decompress_file/main.c
	mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -L$(LIBDIR) -lshrek_decompress shrek_decompress_file/main.c -o $(BINDIR)/$(BIN)

clean:
	rm -f shrek_decompress.o
	rm -f $(LIBDIR)/$(LIB)
	rm -f $(INCDIR)/shrek_decompress.h
	rm -f $(BINDIR)/$(BIN)
	rmdir $(LIBDIR)
	rmdir $(INCDIR)
	rmdir $(BINDIR)

install:
	mkdir -p /usr/local/lib
	mkdir -p /usr/local/include
	cp -r $(LIBDIR)/$(LIB) /usr/local/lib/
	cp -r $(INCDIR)/shrek_decompress.h /usr/local/include/

uninstall:
	rm -f /usr/local/lib/$(LIB)
	rm -f /usr/local/include/shrek_decompress.h
