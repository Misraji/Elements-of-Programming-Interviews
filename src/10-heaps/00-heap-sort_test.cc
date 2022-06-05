#include <gtest/gtest.h>

#include "00-heap-sort.h"

TEST(HeapSort, BasicTest) {
	std::vector<int> values{10, 1, 300, 24, 5, 0};
	heap_sort(values);

	EXPECT_TRUE(std::is_sorted(values.begin(), values.end()));
	
}

