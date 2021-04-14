CC=g++
CCLIB=$(shell pkg-config opencv4 --libs --cflags)
FILE=2.cc
PROGRAMNAME=start

$(PROGRAMNAME) : $(FILE)
	$(CC) -o $@ $^ $(CCLIB)