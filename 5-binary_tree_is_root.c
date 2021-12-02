#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is a root
 * @node: node to be checked
 * Return: 0 if node is not a root and 1 if its a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent)
		return (0);
	else
		return (1);
}
