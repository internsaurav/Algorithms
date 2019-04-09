CC = g++
CFLAGS  = -g -Wall
RM = rm

default: subarray_with_given_sum

subarray_with_given_sum: subarray_with_given_sum.o binary_search.o
	$(CC) $(CFLAGS) -o subarray_with_given_sum subarray_with_given_sum.o binary_search.o

subarray_with_given_sum.o: ./../binary_serach/binary_search.h
	$(CC) $(CFLAGS) -c subarray_with_given_sum.cpp

binary_search.o: ./../binary_serach/binary_search.h
	$(CC) $(CFLAGS) -c ./../binary_serach/binary_search.cpp

clean:
	$(RM) subarray_with_given_sum *.o