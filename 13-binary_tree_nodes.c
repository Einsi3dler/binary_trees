#include "binary_trees.h"
/**
 * binary_tree_nodes - counts numbers of nodes on a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: returns the number of nodes
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
	return (binary_tree_nodes(tree->left)
			+ node + binary_tree_nodes(tree->right));
}
