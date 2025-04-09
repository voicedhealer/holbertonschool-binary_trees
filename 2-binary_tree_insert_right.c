#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insère un nœud comme enfant droit
 * @parent: Pointeur vers le nœud parent
 * @value: Valeur à stocker dans le nouveau nœud
 * Return: Pointeur vers le nouveau nœud ou NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (!parent)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (!new_node)
        return (NULL);

    if (parent->right)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    parent->right = new_node;

    return (new_node);
}
