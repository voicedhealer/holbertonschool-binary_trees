#include "binary_trees.h"

/**
 * binary_tree_node - Crée un nouveau nœud dans un arbre binaire
 * @parent: Pointeur vers le nœud parent du nouveau nœud
 * @value: Valeur à placer dans le nouveau nœud
 *
 * Return: Pointeur vers le nouveau nœud, ou NULL en cas d'échec
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Allouer de la mémoire pour le nouveau nœud */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialiser les champs du nœud */
    new_node->n = value;       /* Assigner la valeur au champ 'n' */
    new_node->parent = parent; /* Assigner le parent */
    new_node->left = NULL;     /* Pas d'enfant gauche au départ */
    new_node->right = NULL;    /* Pas d'enfant droit au départ */

    return (new_node);
    free(new_node);
}
