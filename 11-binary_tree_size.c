#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: The size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    /* If tree is NULL, return 0 */
    if (tree == NULL)
        return (0);

    /* Recursively find the size of the left and right subtrees and add one */
    return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
