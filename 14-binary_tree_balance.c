#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: tree balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lt, rt;

	if (!tree)
		return (0);

	if (tree->left)
		lt = (int)binary_tree_height(tree->left);
	else
		lt = -1;

	if (tree->right)
		rt = (int)binary_tree_height(tree->right);
	else
		rt = -1;

	return (lt - rt);
}

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
