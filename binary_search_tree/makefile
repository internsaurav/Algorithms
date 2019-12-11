CC = g++
CFLAGS  = -g -Wall
RM = rm

default: bin_search_tree

bin_search_tree: bin_search_tree_implementor.o bin_search_tree.o
	$(CC) $(CFLAGS) -o bin_search_tree bin_search_tree_implementor.o bin_search_tree.o

bin_search_tree_implementor.o: bin_search_tree_implementor.cpp bin_search_tree.h
	$(CC) $(CFLAGS) -c bin_search_tree_implementor.cpp

bin_search_tree.o: bin_search_tree.cpp bin_search_tree.h
	$(CC) $(CFLAGS) -c bin_search_tree.cpp

clean:
	$(RM) bin_search_tree *.o