#include "binary_trees.h"

size_t preorden(const binary_tree_t *tree, size_t _size);

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (preorden(tree, 0) - 1);
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
