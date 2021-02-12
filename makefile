CC      = gcc
FLAGS   = -g -Wall
HEADERS = pch.h.gch
OBJECTS = main.o utils.o insertion.o selection.o bubble.o comb.o quick.o shell.o heap.o

default: sorting.exe

%.gch: %.h
	$(CC) $(FLAGS) -c $< -o $@

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

sorting.exe: $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $@

clean:
	-rm -f $(OBJECTS)
	-rm -f sorting.exe
