#include "binary_trees.h"

/**
* height - Measures the height of a binary tree
* @tree: Pointer to the node
* Return: Height or 0 if NULL
*/
size_t height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0; /* Déclarées au début */

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);  /* Appels après la déclaration */
	right_height = height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)(height(tree->left) - height(tree->right)));
}
