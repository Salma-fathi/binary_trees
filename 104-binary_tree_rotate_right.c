#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right rotation on a binary tree
 * @tree: Pointer to the root of the tree
 * Return: Pointer to the new root after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL)
		return (NULL);

	if (tree->left == NULL)
		return (tree);

	new_root = tree->left;
	tree->parent = new_root;
	tree->left = new_root->right;
	new_root->right = tree;
	tree->parent->right = NULL;

	return (new_root);
}
