#include <gtest/gtest.h>

#include "068-print-bst.h"

#include <sstream>

TEST(PrintBst, Empty) {
	BinarySearchTree<int> bst;

	std::ostringstream out;
	print_bst_in_sorted_order<int>(out, bst.root());
	EXPECT_EQ(out.str(), "");
}

TEST(PrintBst, MultipleElements) {
	auto bst = CreateBST(std::vector<int>({2, 1, 3}));

	std::ostringstream out;
	print_bst_in_sorted_order<int>(out, bst->root());
	EXPECT_EQ(out.str(), "1,2,3,");
}
