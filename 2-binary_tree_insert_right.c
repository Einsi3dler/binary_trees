#include "binary_trees.h"
/**
 * binary_tree_insert_left - this inserts a node in the left child of annother node
 * @parent: this is the parent address of the node
 * @value: this contains the value to
 * Return: returns a pointer to the parent address
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	
	if (parent->left != NULL)
	{
		newNode -> right = parent->left;
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
