#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Description: If parent already has a left-child, the new node must take its
 * place, and the old left-child must be set as the left-child of the new node.
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){

    binary_tree_t *insert_left;

    if (parent == NULL)
        return(NULL);
    insert_left = binary_trees_node(parent , value);
    if(insert_left == NULL)
        return(NULL);
    insert_left->left = parent->left;
    if(insert_left->left != NULL)
        insert_left->left = parent->left;
    parent->left =insert_left;
    return(insert_left);
}