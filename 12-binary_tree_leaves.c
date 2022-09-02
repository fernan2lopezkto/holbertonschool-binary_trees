#include "binary_trees.h"

size_t b_t_l(const binary_tree_t *tree);

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: number of leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (b_t_l(tree));
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
