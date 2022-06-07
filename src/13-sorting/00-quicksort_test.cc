#include <gtest/gtest.h>

#include "00-quicksort.h"

#include <algorithm>

TEST(QuickSort, EmptyList) {
	std::vector<int> empty;
	quicksort(empty);

	EXPECT_TRUE(std::is_sorted(empty.begin(), empty.end()));
}

TEST(QuickSort, BasicTest) {
	std::vector<int> values1 = {0};
	quicksort(values1);
	EXPECT_TRUE(std::is_sorted(values1.begin(), values1.end()));

	std::vector<int> values2 = {0, 1};
	quicksort(values2);
	EXPECT_TRUE(std::is_sorted(values2.begin(), values2.end()));

	std::vector<int> values3 = {1, 0};
	quicksort(values3);
	EXPECT_TRUE(std::is_sorted(values3.begin(), values3.end()));

	std::vector<int> values4 = {1,0,1};
	quicksort(values4);
	EXPECT_TRUE(std::is_sorted(values4.begin(), values4.end()));

	std::vector<int> values5 = {0, 1, 0};
	quicksort(values5);
	EXPECT_TRUE(std::is_sorted(values5.begin(), values5.end()));

	std::vector<int> values6 = {0, 1, 2, 2};
	quicksort(values6);
	EXPECT_TRUE(std::is_sorted(values6.begin(), values6.end()));

}
