#include "binary_trees.h"

/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node
 * Return: number or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}


/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node
 * Return: the size of the at every level or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);
}


/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node
 * Return: counts the number of leaves in a binary or return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left || !tree->right)
		return (1);

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
