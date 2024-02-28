#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    /* Allocate memory for the new node */
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    /* Check if allocation succeeded and parent is not NULL */
    if (new_node == NULL || parent == NULL)
        return (NULL);

    /* Assign the value and parent to the new node */
    new_node->n = value;
    new_node->parent = parent;

    /* Initialize the right child to NULL */
    new_node->right = NULL;

    /* Check if parent already has a left child */
    if (parent->left != NULL)
    {
        /* Make the new node the left child of the parent */
        new_node->left = parent->left;

        /* Make the old left child the left child of the new node */
        parent->left->parent = new_node;
    }
    else
    {
        /* Make the new node the left child of the parent */
        new_node->left = NULL;
    }

    /* Make the new node the left child of the parent */
    parent->left = new_node;

    /* Return the new node */
    return (new_node);
}

