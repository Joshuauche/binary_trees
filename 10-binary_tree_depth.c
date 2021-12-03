#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: root node
 * Return: the size of dept
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dept = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		dept++;
	}

	return (dept);
}
