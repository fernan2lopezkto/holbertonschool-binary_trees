#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as
*the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 * Return: Return a pointer to the created node, or NULL on
*failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	if (!parent)
		return (NULL);

	nodo = binary_tree_node(parent, value);
	if (!nodo)
		return (NULL);

	if (parent->right != NULL)
	{
		nodo->right = parent->right;
		parent->right->parent = nodo;
	}
	parent->right = nodo;

	return (nodo);
}

