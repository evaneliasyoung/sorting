CC      = gcc
FLAGS   = -g -Wall
POSTS   = -lmingw32
HEADERS = pch.h.gch
OBJECTS = main.o utils.o insertion.o selection.o bubble.o comb.o shell.o

default: sorting.exe

%.gch: %.h
	$(CC) $(FLAGS) -c $< -o $@ $(POSTS)

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@ $(POSTS)

sorting.exe: $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $@ $(POSTS)

clean:
	-rm -f $(OBJECTS)
	-rm -f sorting.exe
