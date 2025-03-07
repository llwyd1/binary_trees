#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: is a pointer to the node to insert the left child in
 * @value: is the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or it parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = parent->left;
	new->right = NULL;
	parent->left = new;

	if (new->left)
		new->left->parent = new;

	return (new);
}
