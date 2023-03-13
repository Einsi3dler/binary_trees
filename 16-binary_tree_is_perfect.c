#include "binary_trees.h"
/**
 * binary_tree_nodes - gets nodes of binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: returns number of nodes
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

/**
 * binary_tree_leaves - gets number of leaves
 * @tree: a pointer to the root node of the tree to traverse
 * Return: returns the number of leaves
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
	return (binary_tree_leaves(tree->left)
			+ leaf + binary_tree_leaves(tree->right));
}

/**
 * binary_tree_is_perfect - goes through a binary tree to check if it's perfect
 * @tree: a pointer to the root node of the tree to traverse
 * Return: returns either 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_nodes(tree->left) + binary_tree_leaves(tree->left);
	right = binary_tree_nodes(tree->right) + binary_tree_leaves(tree->right);

	if (right == left)
	{
		return (1);
	}
	return (0);
}
