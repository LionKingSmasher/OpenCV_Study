CC=g++
CCLIB=$(shell pkg-config opencv4 --libs --cflags)
FILE=histogram.cc
PROGRAMNAME=start

$(PROGRAMNAME) : $(FILE)
	$(CC) -o $@ $^ $(CCLIB)

clear:
	rm -r start