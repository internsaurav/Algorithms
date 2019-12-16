#include "breadth_first_search.h"

void bfs_binary_tree(node** root){
	if(*root == NULL){
		std::cout << "NULL_TREE";
		return;
	}

	std::queue<node*> nodesToBeProcessed;
	nodesToBeProcessed.push(*root);
	
	while(!nodesToBeProcessed.empty()){
		node* nodeToBeProcessed = nodesToBeProcessed.front();
		nodesToBeProcessed.pop();
		if(nodeToBeProcessed->left != NULL)
			nodesToBeProcessed.push(nodeToBeProcessed->left);

		if(nodeToBeProcessed->right != NULL)
			nodesToBeProcessed.push(nodeToBeProcessed->right);

		std::cout << nodeToBeProcessed->key << " ";
	}
}