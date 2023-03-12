#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return - returns none
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;
	if (tree && tree->left)
	{
		left = binary_tree_balance(tree->left) + 1;
	}
	else
	{
		left = 0;
	}
	if (tree && tree->right)
	{
		right = binary_tree_balance(tree->right) + 1;
	}
	else
	{
		right = 0;
	}
	return left - right;
}
