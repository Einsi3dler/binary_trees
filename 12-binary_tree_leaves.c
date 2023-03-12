#include "binary_trees.h"
/**
 * binary_tree_size - goes through a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return - returns none
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf; 
	
	leaf = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		leaf = 1;
	}
	return binary_tree_leaves(tree->left) + leaf + binary_tree_leaves(tree->right);
}
