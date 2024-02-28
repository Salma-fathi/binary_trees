#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_left, height_right;
    if (tree == NULL)
        return 0;
    height_left = binary_tree_height(tree->left);
    height_right = binary_tree_height(tree->right);
    return (height_left > height_right ? height_left : height_right) + 1;
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t i, height;
    int perfect = 1;
    height = binary_tree_height(tree);
    for (i = 1; i < height; i++)
    {
        if (binary_tree_height(tree->left) != i || binary_tree_height(tree->right) != i)
        {
            perfect = 0;
            break;
        }
    }
    return perfect;
}