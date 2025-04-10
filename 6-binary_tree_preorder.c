#include "binary_trees.h"

/**
 * binary_tree_preorder - Parcourt un arbre binaire en pré-ordre
 * @tree: Pointeur vers le nœud racine de l'arbre
 * @func: Pointeur vers la fonction à appliquer sur chaque valeur
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}
