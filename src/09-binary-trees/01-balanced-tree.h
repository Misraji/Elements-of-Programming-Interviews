#ifndef BINARY_TREES_01_BALANCED_TREE
#define BINARY_TREES_01_BALANCED_TREE

#include <algorithm>
#include <utility>

#include "00-binary-tree.h"

// Checks if the tree is balanced. Returns {height, is_balanced}.
template<typename T>
std::pair<int, bool> is_tree_balanced(BinaryTreePtr<T> root) {

	if (root == nullptr) {
		return std::make_pair(-1, true);
	}

	auto left_val = is_tree_balanced(root->left);
	auto right_val = is_tree_balanced(root->right);

	bool is_balanced = (left_val.second && right_val.second
						&& (abs(left_val.first - right_val.first) <= 0));

	bool height = std::max(left_val.first, right_val.first) + 1;

	return std::make_pair(height, is_balanced);
}
#endif
