#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: The number of nodes, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    /* If tree is NULL, return 0 */
    if (tree == NULL)
        return (0);

    /* If tree is a leaf, return 0 */
    if (tree->left == NULL && tree->right == NULL)
        return (0);

    /* Recursively count the nodes of the left and right subtrees and add one */
    return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
