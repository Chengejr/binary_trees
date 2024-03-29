#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    /* If tree or func is NULL, do nothing */
    if (tree == NULL || func == NULL)
        return;

    /* Recursively traverse the left and right subtrees */
    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);

    /* Call the function with the value of the current node */
    func(tree->n);
}
