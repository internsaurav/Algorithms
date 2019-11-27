CC = g++
CFLAGS  = -g -Wall
RM = rm

default: quicksort

quicksort: quicksort_implementor.o quicksort.o
	$(CC) $(CFLAGS) -o quicksort quicksort_implementor.o quicksort.o

quicksort_implementor.o: quicksort_implementor.cpp quicksort.h
	$(CC) $(CFLAGS) -c quicksort_implementor.cpp

quicksort.o: quicksort.cpp quicksort.h
	$(CC) $(CFLAGS) -c quicksort.cpp

clean:
	$(RM) quicksort *.o