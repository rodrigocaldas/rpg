# Makefile used to compile the library as a shared object (.so)
#

LIB     = rpg
CC      = gcc
SRCDIR  = src
TSTDIR  = tests
BINDIR  = build
DISTDIR = dist
SRCFMT  = c

# Files to compile
SRC     = $(wildcard $(SRCDIR)/*.$(SRCFMT))
TST     = $(wildcard $(TSTDIR)/*.$(SRCFMT))
OBJ     = ${SRC:.$(SRCFMT)=.o}
TOBJ    = ${TST:.$(SRCFMT)=.o}
OUT     = $(subst $(SRCDIR)/, $(BINDIR)/, $(OBJ))
TESTS   = $(subst $(TSTDIR)/, $(BINDIR)/, $(TOBJ))
#IN		= $(subst $(SRCDIR)/,  , $(SRC))
# Compilation Flags
DEBUG   = -ggdb -O0 -pg
RELEASE = -O2
INCLUDE = -Iinclude -I /usr/include
CFLAGS  = -Wall -lm $(DEBUG) $(INCLUDE)

# Compilation
all: $(BINDIR) $(DISTDIR) $(LIB)

$(LIB): $(OUT) $(TESTS)
	$(CC) $^ -o $(DISTDIR)/$@ -L ./libs -l:libctest.so

$(BINDIR)/%.o: $(SRCDIR)/%.$(SRCFMT)
	$(CC) -c -fPIC $(CFLAGS) $< -o $@

$(BINDIR)/%.o: $(TSTDIR)/%.$(SRCFMT)
	$(CC) -c -fPIC $(CFLAGS) $< -o $@

$(BINDIR) $(DISTDIR):
	mkdir -p $@

run:
	./dist/rpg

clean:
	rm -f dist/*
	rm -f $(BINDIR)/*
