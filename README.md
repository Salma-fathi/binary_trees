Tasks
0. New Node
Function: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

1. Insert Left
Function: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

2. Insert Right
Function: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

3. Delete
Function: void binary_tree_delete(binary_tree_t *tree);

4. Is Leaf
Function: int binary_tree_is_leaf(const binary_tree_t *node);

5. Is Root
Function: int binary_tree_is_root(const binary_tree_t *node);

6. Pre-order Traversal
Function: void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

7. In-order Traversal
Function: void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

8. Post-order Traversal
Function: void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

9. Height
Function: size_t binary_tree_height(const binary_tree_t *tree);

10. Depth
Function: size_t binary_tree_depth(const binary_tree_t *tree);
