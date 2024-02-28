#include "binary_trees.h"

#define max(a, b) ((a) > (b) ? (a) : (b))

/**
 * binary_tree_height - Returns the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    /* If tree is NULL, return 0 */
    if (tree == NULL)
        return (0);

    /* Recursively find the height of the left and right subtrees */
    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    /* Return the maximum of the two heights plus one */
    return (max(left_height, right_height) + 1);
}
