#include "binary_trees.h"
/**
 * binary_tree_sibling - this shows a sibiling of a node on a tree
 * @node: this contains a pointer to the node to be checked
 * Return: returns the address of the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	temp = node;

	node = node->parent;

	if (node->left == temp)
	{
		if (node->right)
		{
			return (node->right);
		}
	}
	else
	{
		if (node->left)
		{
			return (node->left);
		}
	}
	return (NULL);
}

/**
 * binary_tree_uncle - this shows an uncle of a node
 * @node: this contains a pointer to the node to be checked
 * Return: returns the address of the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL)
	{
		return (NULL);
	}

	temp = binary_tree_sibling(node->parent);

	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
