CC = g++
CFLAGS  = -g -Wall
RM = rm

default: binary_search_impl

binary_search_impl: binary_search_implementor.o binary_search.o
	$(CC) $(CFLAGS) -o binary_search_impl binary_search_implementor.o binary_search.o

binary_search_implementor.o: binary_search_implementor.cpp binary_search.h
	$(CC) $(CFLAGS) -c binary_search_implementor.cpp

binary_search.o: binary_search.cpp binary_search.h
	$(CC) $(CFLAGS) -c binary_search.cpp

clean:
	$(RM) binary_search_impl *.o