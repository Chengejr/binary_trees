#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    /* if node is NULL, return NULL */
    if (node == NULL)
        return (NULL);

    /* find the parent and the grandparent of the node */
    binary_tree_t *parent = node->parent;
    binary_tree_t *grandparent = parent ? parent->parent : NULL;

    /* if the grandparent is NULL, return NULL */
    if (grandparent == NULL)
        return (NULL);

    /* if the parent is the left child of the grandparent, return the right child */
    if (parent == grandparent->left)
        return (grandparent->right);

    /* if the parent is the right child of the grandparent, return the left child */
    if (parent == grandparent->right)
        return (grandparent->left);

    /* if the node has no uncle, return NULL */
    return (NULL);
}
