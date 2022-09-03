#include "binary_trees.h"

size_t sizet(const binary_tree_t *tree, size_t _size);
size_t binary_tree_height(const binary_tree_t *tree);
int pot(int numero, int potencia);

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: value indicator true or false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int height, t_n = 0, size;

	if (!tree)
		return (0);

	height = (int)binary_tree_height(tree);
	size = (int)sizet(tree, 0);

	while (height >= 0)
	{
		t_n = t_n + pot(2, height);
		height--;
	}

	if (t_n == size || t_n == size - 2)
		return (1);

	return (0);


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

/**
 * sizet - recursive function
 * @tree: root node
 * @_size: node counter
 * Return: number of nodes + 1
 */
size_t sizet(const binary_tree_t *tree, size_t _size)
{
	if (tree != NULL)
	{
		_size = sizet(tree->left, _size) + sizet(tree->right, _size);
	}
	else
	{
		_size++;
	}
	return (_size);
}
/**
 * pot - pow functions
 * @numero: number to pow
 * @potencia: pow number
 * Return: int value
 */
int pot(int numero, int potencia)
{
	int resultado = numero;

	while (potencia > 1)
	{
		resultado = resultado * numero;
		potencia--;
	}
	return (resultado);
}
