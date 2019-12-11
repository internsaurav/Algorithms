#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include "bin_search_tree.h"
using namespace std;

void generateRandomArray(int* empty, int length){
	srand (time(NULL));
	for (int i=0; i<length; i++){
		empty[i] = rand();
	}
}

void basicTestCases(){
	cout << "BASIC TEST CASES\n================\n";
	int caseNum = 0;
	int length = -1;
	node* nodes = NULL;
	node* tree = NULL;

	length = 1;
	nodes = new node[length];
	nodes[0] = {5, NULL, NULL, NULL};

	for(int i=0; i <length; i++){
		tree_insert(&tree, &nodes[i]);
	}
	cout << "TestCase " << ++caseNum << "\n----------------\n";
	in_order_tree_walk(&tree);
	tree = NULL;
	delete[] nodes;
	cout << "\n";


	length = 2;
	nodes = new node[length];
	nodes[0] = {5, NULL, NULL, NULL};
	nodes[1] = {1, NULL, NULL, NULL};

	for(int i=0; i <length; i++){
		tree_insert(&tree, &nodes[i]);
	}
	cout << "TestCase " << ++caseNum << "\n----------------\n";
	in_order_tree_walk(&tree);
	tree = NULL;
	delete[] nodes;
	cout << "\n";


	length = 7;
	nodes = new node[length];
	nodes[0] = {5, NULL, NULL, NULL};
	nodes[1] = {2, NULL, NULL, NULL};
	nodes[2] = {8, NULL, NULL, NULL};
	nodes[3] = {1, NULL, NULL, NULL};
	nodes[4] = {3, NULL, NULL, NULL};
	nodes[5] = {6, NULL, NULL, NULL};
	nodes[6] = {9, NULL, NULL, NULL};
	
	for(int i=0; i <length; i++){
		tree_insert(&tree, &nodes[i]);
	}
	cout << "TestCase " << ++caseNum << "\n----------------\n";
	in_order_tree_walk(&tree);
	tree = NULL;
	delete[] nodes;
	cout << "\n";


}

int main(){
	basicTestCases();
	// level1TestCases();
	return 0;
}

