CC = clang++

ifeq ($(cc), GCC)
CC = g++
endif

ifeq ($(cc), CLANG)
CC = clang++
endif

CFLAGS = -Wall -std=c++11

OBJECTS = catalog.o main.o movie.o

EXEC = third_assignment

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o

clean-all:
	rm -f *.o third_assignment
