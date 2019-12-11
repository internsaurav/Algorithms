#include "bin_search_tree.h"
#include <iostream>

void tree_insert(node** root, node* z){
	if(*root == NULL){
		*root = z;
		(*root)->p = NULL;
		return;
	}

	node* x = *root;
	node* y = NULL;
	while( x != NULL){
		y = x;
		if (z->key < x->key){
			x = x->left;
		} else {
			x = x->right;
		}
	}

	if(z->key < y->key){
		y->left = z;
	} else {
		y->right = z;
	}
	
	z->p = y;
}

void in_order_tree_walk(node* root){
	if(root->left != NULL)
		in_order_tree_walk(root->left);

	std::cout <<  root->key << ", ";

	if(root->right != NULL)
		in_order_tree_walk(root->right);

}

void in_order_tree_walk(node** root){
	if(*root == NULL)
		return;
	in_order_tree_walk(*root);
}