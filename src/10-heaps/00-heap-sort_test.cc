#include <gtest/gtest.h>

#include "00-heap-sort.h"

TEST(HeapSort, BasicTest) {
	// 1. Basic sort test.
	std::vector<int> values1{10, 1, 300, 24, 5, 0};
	heap_sort(values1);
	EXPECT_TRUE(std::is_sorted(values1.begin(), values1.end()));
	
	// 2. Empty vector.
	std::vector<int> values2;
	heap_sort(values2);
	EXPECT_TRUE(std::is_sorted(values2.begin(), values2.end()));

	// 3. Already sorted vector.
	std::vector<int> values3{1, 2, 3};
	heap_sort(values3);
	EXPECT_TRUE(std::is_sorted(values3.begin(), values3.end()));
}

