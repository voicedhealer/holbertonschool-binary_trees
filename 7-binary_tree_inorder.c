#include "binary_trees.h"

/**
 * binary_tree_inorder - Parcourt un arbre binaire en in-order
 * @tree: Pointeur vers le nœud racine de l'arbre
 * @func: Pointeur vers la fonction à appliquer sur chaque valeur
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
