#include "binary_trees.h"
/**
 * binary_tree_size - goes through a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return - returns none
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node; 
	
	node = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		node = 1;
	}
	return binary_tree_nodes(tree->left) + node + binary_tree_nodes(tree->right);
}
