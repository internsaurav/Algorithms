CC = g++
CFLAGS  = -g -Wall
RM = rm

default: countingSort

countingSort: countingSort_implementor.o countingSort.o
	$(CC) $(CFLAGS) -o countingSort countingSort_implementor.o countingSort.o

countingSort_implementor.o: countingSort_implementor.cpp countingSort.h
	$(CC) $(CFLAGS) -c countingSort_implementor.cpp

countingSort.o: countingSort.cpp countingSort.h
	$(CC) $(CFLAGS) -c countingSort.cpp

clean:
	$(RM) countingSort *.o