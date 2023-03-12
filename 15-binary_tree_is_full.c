#include "binary_trees.h"
/**
 * binary_tree_is_full - goes through a binary tree to check if it's full
 * @tree: a pointer to the root node of the tree to traverse
 * Return: returns either 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right, leaf;

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
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);

		if (left == 0 || right == 0)
		{
			leaf = 0;
		}
		else
		{
			leaf = 1;
		}
	}
	else
	{
		leaf = 0;
	}

	return (leaf);
}
