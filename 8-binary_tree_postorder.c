#include "binary_trees.h"

/**
 * binary_tree_postorder - Parcourt un arbre binaire en post-order
 * @tree: Pointeur vers le nœud racine de l'arbre
 * @func: Pointeur vers la fonction à appliquer sur chaque valeur
 *
 * Return: Rien
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
