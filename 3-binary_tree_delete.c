#include "binary_trees.h"

/**
 * binary_tree_delete - Supprime récursivement un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre à supprimer
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
