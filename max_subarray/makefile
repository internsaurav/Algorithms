CC = g++
CFLAGS  = -g -Wall
RM = rm

default: max_subarray_test

max_subarray_test: max_subarray_tester.o max_subarray.o
	$(CC) $(CFLAGS) -o max_subarray_test max_subarray_tester.o max_subarray.o

max_subarray_tester.o: max_subarray_tester.cpp max_subarray.h ./../catch.hpp
	$(CC) $(CFLAGS) -c max_subarray_tester.cpp

max_subarray.o: max_subarray.cpp max_subarray.h
	$(CC) $(CFLAGS) -c max_subarray.cpp

clean:
	$(RM) max_subarray_test *.o