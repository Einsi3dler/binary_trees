#include "binary_trees.h"
/**
 * binary_tree_delete - this deletes an entire tree 
 * @tree: root of the tree
 * Return: returns null
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
