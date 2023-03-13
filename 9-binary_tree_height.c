#include "binary_trees.h"
/**
 * max - finds the max of two numbers
 * @a: an int
 * @b: an int
 * Return: returns the biggest number
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

/**
 * binary_tree_height - measures a binary tree height
 * @tree: a pointer to the root node of the tree
 * Return: returns the size of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree && tree->left)
	{
		left = binary_tree_height(tree->left) + 1;
	}
	else
	{
		left = 0;
	}
	if (tree && tree->right)
	{
		right = binary_tree_height(tree->right) + 1;
	}
	else
	{
		right = 0;
	}
	return (max(left, right));
}
