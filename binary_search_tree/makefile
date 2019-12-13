CC = g++
CFLAGS  = -g -Wall
I = -I ../ioutils
RM = rm

default: bin_search_tree

bin_search_tree: bin_search_tree_implementor.o bin_search_tree.o utils.o
	$(CC)  $(CFLAGS) -o bin_search_tree bin_search_tree_implementor.o bin_search_tree.o utils.o

bin_search_tree_implementor.o: bin_search_tree_implementor.cpp bin_search_tree.h ../ioutils/utils.h
	$(CC) $(I) $(CFLAGS) -c bin_search_tree_implementor.cpp

bin_search_tree.o: bin_search_tree.cpp bin_search_tree.h
	$(CC)  $(CFLAGS) -c bin_search_tree.cpp

utils.o: ../ioutils/utils.cpp ../ioutils/utils.h
	$(CC)  $(CFLAGS) -c ../ioutils/utils.cpp 

clean:
	$(RM) bin_search_tree *.o