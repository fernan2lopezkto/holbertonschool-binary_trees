#include "binary_trees.h"

size_t b_t(const binary_tree_t *tree, size_t i);

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (preorden(tree, 0) - 1 - b_t_l(tree));
}

/**
 * preorden - recursive function
 *
 * @tree: root node
 * @_size: node counter
 *
 * Return: number of nodes + 1
 */
size_t preorden(const binary_tree_t *tree, size_t _size)
{
	if (tree != NULL)
	{
		_size = preorden(tree->left, _size) + preorden(tree->right, _size);
	}
	else
	{
		_size++;
	}
	return (_size);
}

/**
 * b_t_l - recursive function
 *
 * @tree: pointer root
 *
 * Return: number of leaf
 */
size_t b_t_l(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (b_t_l(tree->left) + b_t_l(tree->right));
}
