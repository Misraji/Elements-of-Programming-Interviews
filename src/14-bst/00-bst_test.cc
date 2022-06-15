#include <gtest/gtest.h>

#include "00-bst.h"

TEST(BinarySearchTree, EmptyTest) {
	BinarySearchTree<int> bst;

	EXPECT_TRUE(bst.Empty());
	EXPECT_FALSE(bst.Find(5));
	EXPECT_FALSE(bst.Erase(5));

	bst.Clear();
}

TEST(BinarySearchTree, SingleValueTest) {
	auto bst = CreateBST(std::vector<int>({1}));

	EXPECT_FALSE(bst->Empty());
	EXPECT_TRUE(bst->Find(1));
	EXPECT_FALSE(bst->Find(5));

	EXPECT_TRUE(bst->Erase(1));
	EXPECT_FALSE(bst->Find(1));
	EXPECT_TRUE(bst->Empty());

	EXPECT_TRUE(bst->Insert(1));
	bst->Clear();
	EXPECT_TRUE(bst->Empty());
}

TEST(BinarySearchTree, TwoValuesTest) {
	auto bst = CreateBST(std::vector<int>({1, 2}));

	EXPECT_FALSE(bst->Empty());
	EXPECT_TRUE(bst->Find(1));
	EXPECT_TRUE(bst->Find(2));
	EXPECT_FALSE(bst->Find(5));

	EXPECT_TRUE(bst->Erase(1));
	EXPECT_FALSE(bst->Find(1));
	EXPECT_FALSE(bst->Empty());

	EXPECT_TRUE(bst->Find(2));
	EXPECT_TRUE(bst->Erase(2));
	EXPECT_TRUE(bst->Empty());

	bst->Insert(2);
	bst->Insert(1);
	
	EXPECT_TRUE(bst->Erase(1));
	EXPECT_FALSE(bst->Find(1));
	EXPECT_FALSE(bst->Empty());

	EXPECT_TRUE(bst->Find(2));
	EXPECT_TRUE(bst->Erase(2));
	EXPECT_TRUE(bst->Empty());
}

TEST(BinarySearchTree, BalancedTreeTest) {

	auto bst = CreateBST(std::vector<int>({2, 1, 3}));

	EXPECT_TRUE(bst->Erase(2));
	EXPECT_TRUE(bst->Erase(3));
	EXPECT_TRUE(bst->Erase(1));
}

