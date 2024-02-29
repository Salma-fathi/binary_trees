#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right rotation on a binary tree
 * @tree: Pointer to the root of the tree
 * Return: Pointer to the new root after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
    if(tree == NULL)
        return (NULL);

    if(tree->left == NULL)
        return (tree);

    tree->parent = tree->left;
    tree->left = tree->left->right;
    tree->parent->right = tree;

    return (tree->parent);
}
