#include <gtest/gtest.h>

#include "03-index-equals-number.h"

TEST(IndexEqualsNumber, EmptyList) {
	std::vector<int> empty;
	EXPECT_FALSE(index_equals_number(empty));
}

TEST(IndexEqualsNumber, FirstIndex) {
	std::vector<int> values1 = {0, 100, 200};
	EXPECT_TRUE(index_equals_number(values1));

	std::vector<int> values2 = {0, 100};
	EXPECT_TRUE(index_equals_number(values2));
}

TEST(IndexEqualsNumber, LastIndex) {
	std::vector<int> values1 = {-100, -50, 2};
	EXPECT_TRUE(index_equals_number(values1));

	std::vector<int> values2 = {-100, 1};
	EXPECT_TRUE(index_equals_number(values2));
}

TEST(IndexEqualsNumber, SomeIndex) {
	std::vector<int> values1 = {-100, 1, 300};
	EXPECT_TRUE(index_equals_number(values1));

	std::vector<int> values2 = {-100, 0, 2, 300};
	EXPECT_TRUE(index_equals_number(values2));
}

TEST(IndexEqualsNumber, NoIndex) {
	std::vector<int> values1 = {100};
	EXPECT_FALSE(index_equals_number(values1));

	std::vector<int> values2 = {100, 200};
	EXPECT_FALSE(index_equals_number(values2));

	std::vector<int> values3 = {100, 200, 300, 400, 500};
	EXPECT_FALSE(index_equals_number(values3));
}
