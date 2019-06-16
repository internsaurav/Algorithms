CC = g++
CFLAGS  = -g -Wall
RM = rm

default: insertion_sort_test

insertion_sort_test: insertion_sort_tester.o insertion_sort.o
	$(CC) $(CFLAGS) -o insertion_sort_test insertion_sort_tester.o insertion_sort.o

insertion_sort_tester.o: insertion_sort_tester.cpp insertion_sort.h ./../catch.hpp
	$(CC) $(CFLAGS) -c insertion_sort_tester.cpp

insertion_sort.o: insertion_sort.cpp insertion_sort.h
	$(CC) $(CFLAGS) -c insertion_sort.cpp

clean:
	$(RM) insertion_sort_test *.o