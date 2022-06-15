#include <gtest/gtest.h>

#include "02-rpn-notation.h"

TEST(RpnNotation, Empty) {
	EXPECT_THROW(eval(""), std::length_error);
}

TEST(RpnNotation, BasicTest) {
	EXPECT_EQ(eval("1,2,+"), 3);
	EXPECT_EQ(eval("1,2,-"), -1);
	EXPECT_EQ(eval("1,2,*"), 2);
	EXPECT_EQ(eval("1,2,/"), 0);
}

TEST(RpnNotation, MultipleOperators) {
	EXPECT_EQ(eval("3,4,*,1,2,+,+"), 15);
	EXPECT_EQ(eval("1,1,+,-2,*"), -4);
	EXPECT_EQ(eval("4,6,/,2,/"), 0);
}
