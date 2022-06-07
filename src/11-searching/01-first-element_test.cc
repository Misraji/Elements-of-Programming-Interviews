#include <gtest/gtest.h>

#include "01-first-element.h"

TEST(FirstElementSearch, EmptyList) {
	std::vector<int> empty;

	EXPECT_EQ(bsearch(0, empty), -1);
}

TEST(FirstElementSearch, BasicTest) {

	std::vector<int> values = {1, 1, 2, 2, 3, 4, 4, 5};

	EXPECT_EQ(bsearch(0, values), -1);
	EXPECT_EQ(bsearch(1, values), 0);
	EXPECT_EQ(bsearch(2, values), 2);
	EXPECT_EQ(bsearch(3, values), 4);
	EXPECT_EQ(bsearch(5, values), 7);
}
