#include "binary_trees.h"
/**
 * binary_tree_size - goes through a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return - returns none
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
}
