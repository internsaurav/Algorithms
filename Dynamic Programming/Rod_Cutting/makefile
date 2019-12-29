CC = g++
CFLAGS  = -g -Wall
RM = rm

default: cut_rod

cut_rod: cut_rod_tester.o cut_rod.o
	$(CC) $(CFLAGS) -o bin/cut_rod cut_rod_tester.o cut_rod.o

cut_rod_tester.o: cut_rod_tester.cpp cut_rod.h
	$(CC) $(CFLAGS) -c cut_rod_tester.cpp

cut_rod.o: cut_rod.cpp cut_rod.h
	$(CC) $(CFLAGS) -c cut_rod.cpp

clean:
	$(RM) bin/cut_rod *.o