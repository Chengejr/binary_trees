#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    /* Allocate memory for the new node */
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    /* Check if allocation succeeded and parent is not NULL */
    if (new_node == NULL || parent == NULL)
        return (NULL);

    /* Assign the value and parent to the new node */
    new_node->n = value;
    new_node->parent = parent;

    /* Initialize the left child to NULL */
    new_node->left = NULL;

    /* Check if parent already has a right child */
    if (parent->right != NULL)
    {
        /* Make the new node the right child of the parent */
        new_node->right = parent->right;

        /* Make the old right child the right child of the new node */
        parent->right->parent = new_node;
    }
    else
    {
        /* Make the new node the right child of the parent */
        new_node->right = NULL;
    }

    /* Make the new node the right child of the parent */
    parent->right = new_node;

    /* Return the new node */
    return (new_node);
}
