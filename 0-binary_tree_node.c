#include "binary_trees.h"
/**
 * binary_tree_node - this creates a new binary node
 * @parent: this a pointer to the parent node of the node to create
 * @value: this is the int value to go into the node
 * Return: returns the address of the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
