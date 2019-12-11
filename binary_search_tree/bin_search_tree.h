#ifndef BIN_SEARCH_TREE_H
#define BIN_SEARCH_TREE_H

struct node {
	int key;
	node* p;
	node* left;
	node* right;
};

void tree_insert(node** root, node* z);
void in_order_tree_walk(node** root);

#endif