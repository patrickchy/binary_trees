#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse binary tree using pre-order
 *
 * @tree: Pointer to the root node of the tree to traverse
 *
 * @func: Pointer to a function to call for each node.
 *
 * Return: If tree or func is NULL, do nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	if (func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
