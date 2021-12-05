#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of binary tree
 *
 * @tree: root node
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	if (tree->right)
		right_height = binary_tree_height(tree->right);
	else
		return (-1);

	if (tree->left)
		left_height = binary_tree_height(tree->left);
	else
		return (-1);

	return (left_height - right_height);
}


/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: root node
 * Return: the height from each right sub tree node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}
