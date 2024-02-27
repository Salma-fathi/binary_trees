#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
    if(tree == NULL)
    {
        return(NULL);
    }

    binary_tree_delete(tree->left);

    binary_tree_delete(tree->return);
    
    
    free(tree);
}