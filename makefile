CC=gcc
obs=main.o pop.o
out=poptest
sdllib=$(shell sdl2-config --libs --cflags)
CFLAGS=$(sdlib) -Iinclude

all: $(obs)
	$(CC) $(CFLAGS) $(obs) -o $(out)

.PHONY: clean tidy

clean:
	-rm $(obs) $(out)

tidy:
	-rm $(obs)
