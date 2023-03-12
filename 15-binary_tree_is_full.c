#include "binary_trees.h"
/**
 * binary_tree_is_full - goes through a binary tree to check if it's full
 * @tree: a pointer to the root node of the tree to traverse
 * Return: returns either 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leaf;

	leaf = 0;
	if (tree == NULL)
	{
		return (0);

	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		leaf = binary_tree_is_full(tree->left);
		leaf = binary_tree_is_full(tree->right);
	}
	else
	{
		return (0);
	}

	return (leaf);
}
