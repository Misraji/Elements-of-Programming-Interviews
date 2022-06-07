#include <gtest/gtest.h>

#include "02-first-element-larger.h"

TEST(FirstElementLarger, EmptyList) {
	std::vector<int> empty;

	EXPECT_EQ(first_element_larger_than_k(empty, 0), -1);
}

TEST(FirstElementLarger, BasicTest) {
	std::vector<int> values = {0, 1, 1, 2, 3, 3, 4, 5};


	EXPECT_EQ(first_element_larger_than_k(values, -1), 0);
	EXPECT_EQ(first_element_larger_than_k(values, 0), 1);
	EXPECT_EQ(first_element_larger_than_k(values, 3), 6);
	EXPECT_EQ(first_element_larger_than_k(values, 4), 7);
	EXPECT_EQ(first_element_larger_than_k(values, 5), -1);
}
