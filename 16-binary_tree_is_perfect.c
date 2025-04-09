#include "binary_trees.h"

/**
* depth - returns the depth (height) of leftmost leaf
* @tree: pointer to the node
* Return: depth value
*/
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
* is_perfect_recursive - recursive checker for perfect tree
* @tree: pointer to current node
* @d: depth of the tree
* @level: current level
* Return: 1 if perfect, else 0
*/
int is_perfect_recursive(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (d == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect_recursive(tree->left, d, level + 1) &&
			is_perfect_recursive(tree->right, d, level + 1));
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to root node
* Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (!tree)
		return (0);

	d = depth(tree);
	return (is_perfect_recursive(tree, d, 0));
}
