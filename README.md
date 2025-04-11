# C - Binary Trees - Holberton School Project

### Table of Contents

- [Features](#features)
- [Files](#files)
- [Compilation](#compilation)
- [Usage Examples](#usage-examples)
- [Authors](#authors)

#

### Description

This project explores binary trees, a fundamental data structure in computer science. It covers the implementation of binary trees in C, including various operations such as insertion, traversal, and deletion. The project also emphasizes the importance of understanding binary trees for technical interviews and algorithmic challenges.

### Features

<!-- - Implementation of binary tree data structure in C
- Functions for creating, inserting, and deleting nodes
- Functions for traversing the tree (pre-order, in-order, post-order)
- Functions for calculating the height and depth of the tree
- Functions for checking if the tree is balanced
- Functions for finding the lowest common ancestor (LCA) of two nodes
- Functions for counting the number of nodes in the tree
- Functions for finding the maximum and minimum values in the tree -->

| Functionality | Description |
| ------------- | ----------- |
| `binary_tree_node` | Creates a binary tree node. |
| `binary_tree_insert_left` | Inserts a node as the left child of another node. |
| `binary_tree_insert_right` | Inserts a node as the right child of another node. |
| `binary_tree_delete` | Deletes a binary tree. |
| `binary_tree_is_leaf` | Checks if a node is a leaf. |
| `binary_tree_is_root` | Checks if a node is a root. |
| `binary_tree_preorder` | Traverses a binary tree in pre-order. |
| `binary_tree_inorder` | Traverses a binary tree in in-order. |
| `binary_tree_postorder` | Traverses a binary tree in post-order. |
| `binary_tree_height` | Calculates the height of a binary tree. |
| `binary_tree_depth` | Calculates the depth of a node in a binary tree. |
| `binary_tree_size` | Calculates the size of a binary tree. |
| `binary_tree_leaves` | Counts the leaves in a binary tree. |
| `binary_tree_nodes` | Counts the nodes with at least one child in a binary tree. |
| `binary_tree_balance` | Calculates the balance factor of a binary tree. |
| `binary_tree_is_full` | Checks if a binary tree is full. |
| `binary_tree_is_perfect` | Checks if a binary tree is perfect. |
| `binary_tree_sibling` | Finds the sibling of a node in a binary tree. |
| `binary_tree_uncle` | Finds the uncle of a node in a binary tree. |

### Files

| File | Description | Link |
| ---- | ----------- | ---- |
| `binary_trees.h` | Header file containing function prototypes and structure definitions. | [View](binary_trees.h) |
| `0-binary_tree_node.c` | Function to create a binary tree node. | [View](0-binary_tree_node.c) |
| `1-binary_tree_insert_left.c` | Function to insert a node as the left child of another node. | [View](1-binary_tree_insert_left.c) |
| `2-binary_tree_insert_right.c` | Function to insert a node as the right child of another node. | [View](2-binary_tree_insert_right.c) |
| `3-binary_tree_delete.c` | Function to delete a binary tree. | [View](3-binary_tree_delete.c) |
| `4-binary_tree_is_leaf.c` | Function to check if a node is a leaf. | [View](4-binary_tree_is_leaf.c) |
| `5-binary_tree_is_root.c` | Function to check if a node is a root. | [View](5-binary_tree_is_root.c) |
| `6-binary_tree_preorder.c` | Function to traverse a binary tree in pre-order. | [View](6-binary_tree_preorder.c) |
| `7-binary_tree_inorder.c` | Function to traverse a binary tree in in-order. | [View](7-binary_tree_inorder.c) |
| `8-binary_tree_postorder.c` | Function to traverse a binary tree in post-order. | [View](8-binary_tree_postorder.c) |
| `9-binary_tree_height.c` | Function to calculate the height of a binary tree. | [View](9-binary_tree_height.c) |
| `10-binary_tree_depth.c` | Function to calculate the depth of a node in a binary tree. | [View](10-binary_tree_depth.c) |
| `11-binary_tree_size.c` | Function to calculate the size of a binary tree. | [View](11-binary_tree_size.c) |
| `12-binary_tree_leaves.c` | Function to count the leaves in a binary tree. | [View](12-binary_tree_leaves.c) |
| `13-binary_tree_nodes.c` | Function to count the nodes with at least one child in a binary tree. | [View](13-binary_tree_nodes.c) |
| `14-binary_tree_balance.c` | Function to calculate the balance factor of a binary tree. | [View](14-binary_tree_balance.c) |
| `15-binary_tree_is_full.c` | Function to check if a binary tree is full. | [View](15-binary_tree_is_full.c) |
| `16-binary_tree_is_perfect.c` | Function to check if a binary tree is perfect. | [View](16-binary_tree_is_perfect.c) |
| `17-binary_tree_sibling.c` | Function to find the sibling of a node in a binary tree. | [View](17-binary_tree_sibling.c) |
| `18-binary_tree_uncle.c` | Function to find the uncle of a node in a binary tree. | [View](18-binary_tree_uncle.c) |

### Compilation

To compile the code, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees
```

### Usage Examples

```bash
#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	binary_tree_insert_left(root, 12);
	binary_tree_insert_right(root, 54);
	binary_tree_insert_left(root->left, 6);
	binary_tree_insert_right(root->left, 16);
	binary_tree_insert_left(root->right, 45);
	binary_tree_insert_right(root->right, 75);

	printf("In-order traversal:\n");
	binary_tree_inorder(root);

	printf("\nPre-order traversal:\n");
	binary_tree_preorder(root);

	printf("\nPost-order traversal:\n");
	binary_tree_postorder(root);

	printf("\nHeight of the tree: %d\n", binary_tree_height(root));
	printf("Depth of node with value 16: %d\n", binary_tree_depth(binary_tree_node(root->left->right, 16)));
	
	return (0);
}
```

#### Authors &copy;

- **Martin Clement** - [GitHub Profile](https://github.com/ItsZmainDev)
- **Terence Tengue** - [GitHub Profile](https://github.com/Terencetjt26)