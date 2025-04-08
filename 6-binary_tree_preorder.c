#include "binary_trees.h"

/**
* binary_tree_preorder - Goes through a binary tree using pre-order traversal
* @tree: Pointer to the root node of the tree
* @func: Pointer to a function to call for each node
*
* Description: Visits nodes in the order: root, left, right
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);                             /* Visit root */
	binary_tree_preorder(tree->left, func);   /* Traverse left subtree */
	binary_tree_preorder(tree->right, func);  /* Traverse right subtree */
}
