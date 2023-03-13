#include "binary_trees.h"
/**
 * binary_tree_depth - goes through a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * Return: returns the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}
	count = 0;
	while (tree->parent)
	{
		tree = tree->parent;
		count++;
	}

	return (count);
}
