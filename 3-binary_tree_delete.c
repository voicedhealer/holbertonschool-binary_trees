#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insère un nœud comme enfant droit
 * @parent: Pointeur vers le nœud parent
 * @value: Valeur à stocker dans le nouveau nœud
 * Return: Pointeur vers le nouveau nœud ou NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
   if (!tree)
   {
    return;
   }
   binary_tree_delete(tree->left);
   binary_tree_delete(tree->right);

   free(tree);
}
