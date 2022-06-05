#include <gtest/gtest.h>

#include "01-balanced-tree.h"

TEST(BalancedTree, NullTest) {
	auto result = is_tree_balanced<int>(nullptr);

	EXPECT_EQ(result.first, -1);
	EXPECT_TRUE(result.second);

}

TEST(BalancedTree, BalancedTest) {
	auto leaf1 = make_leaf(5);
	auto result = is_tree_balanced(leaf1);

	EXPECT_EQ(result.first, 0);
	EXPECT_TRUE(result.second);

	auto leaf2 = make_leaf(10);
	auto tree = make_tree(100, leaf1, leaf2);

	result = is_tree_balanced(tree);
	EXPECT_EQ(result.first, 1);
	EXPECT_TRUE(result.second);

}

TEST(BalancedTree, UnbalancedTest) {
	auto leaf1 = make_leaf(5);
	auto tree = make_tree(10, leaf1, NullBinaryTree<int>());

	auto result = is_tree_balanced(tree);
	EXPECT_EQ(result.first, 1);
	EXPECT_FALSE(result.second);

}
