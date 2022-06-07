#include <gtest/gtest.h>

#include "04-cyclically-sorted-list.h"

TEST(SmallestElement, EmptyList) {
	const std::vector<int> empty;
	EXPECT_EQ(smallest_element(empty), -1);
}

TEST(SmallestElement, Basic) {
	const std::vector<int> values1 = {1};
	EXPECT_EQ(smallest_element(values1), 0);

	const std::vector<int> values2 = {1, 2};
	EXPECT_EQ(smallest_element(values2), 0);

	const std::vector<int> values3 = {2, 1};
	EXPECT_EQ(smallest_element(values3), 1);

	const std::vector<int> values4 = {3, 1, 2};
	EXPECT_EQ(smallest_element(values4), 1);

	const std::vector<int> values5 = {3, 2, 1};
	EXPECT_EQ(smallest_element(values5), 2);

}
