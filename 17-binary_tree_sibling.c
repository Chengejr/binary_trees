#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    /* if node is NULL or the parent is NULL, return NULL */
    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* if node is the left child of its parent, return the right child */
    if (node == node->parent->left)
        return (node->parent->right);

    /* if node is the right child of its parent, return the left child */
    if (node == node->parent->right)
        return (node->parent->left);

    /* if node has no sibling, return NULL */
    return (NULL);
}
