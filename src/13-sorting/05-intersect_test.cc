#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "05-intersect.h"

using ::testing::ElementsAre;

TEST(Intersect, EmptyLists) {
	std::vector<int> empty;
	std::vector<int> non_empty = {1};

	EXPECT_TRUE(intersect(empty, empty).empty());
	EXPECT_TRUE(intersect(non_empty, empty).empty());
	EXPECT_TRUE(intersect(empty, non_empty).empty());
}

TEST(Intersect, NonEmptyLists) {
	const std::vector<int> list1 = {100};
	const std::vector<int> list2 = {100};

	EXPECT_THAT(intersect(list1, list2), ElementsAre(100));

	const std::vector<int> list3 = {50, 100};
	EXPECT_THAT(intersect(list1, list3), ElementsAre(100));
	EXPECT_THAT(intersect(list3, list1), ElementsAre(100));

	const std::vector<int> list4 = {50, 100, 200};
	EXPECT_THAT(intersect(list1, list4), ElementsAre(100));
	EXPECT_THAT(intersect(list4, list1), ElementsAre(100));
}

TEST(Intersect, EmptyResult) {

	const std::vector<int> list1 = {100, 200};
	const std::vector<int> list2 = {0};

	EXPECT_TRUE(intersect(list1, list2).empty());
	EXPECT_TRUE(intersect(list2, list1).empty());
}
