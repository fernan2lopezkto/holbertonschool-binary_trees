#include "binary_trees.h"

int bin(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: tree balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (bin(tree->left) - bin(tree->right));
}

/**
 * bin - recurtion to func
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: tree balance
 */
int bin(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	if (!tree->left && !tree->right)
		return (0);
	return (1 + bin(tree->left) + bin(tree->right));
}
