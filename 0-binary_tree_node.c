#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 *
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declare node and request memory */
	binary_tree_t *nodo = malloc(sizeof(binary_tree_t));

	/* failure cases */
	if (!value || !nodo)
		return (NULL);

	/* for root node case */
	if (!parent)
	{
		nodo->parent = NULL;
	}
	else
	{
		nodo->parent = parent;
	}

	/* add node */
	nodo->n = value;
	nodo->left = NULL;
	nodo->right = NULL;


	/*  return node */
	return (nodo);
}
