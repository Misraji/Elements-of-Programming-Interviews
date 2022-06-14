#include <gtest/gtest.h>

#include "01-max-stack.h"

TEST(MaxStack, Empty) {
	MaxStack<int> stack;
	EXPECT_TRUE(stack.empty());
}

TEST(MaxStack, SingleValue) {
	MaxStack<int> stack;

	EXPECT_TRUE(stack.empty());

	stack.push(1);

	EXPECT_EQ(stack.top(), 1);
	EXPECT_FALSE(stack.empty());
}

TEST(MaxStack, MultipleValues) {
	// values: 1,2,3,0
	MaxStack<int> stack;

	stack.push(1);
	EXPECT_EQ(stack.top(), 1);
	EXPECT_EQ(stack.max(), 1);

	stack.push(2);
	EXPECT_EQ(stack.top(), 2);
	EXPECT_EQ(stack.max(), 2);

	stack.push(3);
	EXPECT_EQ(stack.top(), 3);
	EXPECT_EQ(stack.max(), 3);

	stack.push(0);
	EXPECT_EQ(stack.top(), 0);
	EXPECT_EQ(stack.max(), 3);

	stack.pop();
	EXPECT_EQ(stack.max(), 3);

	stack.pop();
	EXPECT_EQ(stack.max(), 2);

	stack.pop();
	EXPECT_EQ(stack.max(), 1);

	stack.pop();
	EXPECT_TRUE(stack.empty());
}

TEST(AuxStack, Empty) {
	AuxStack<int> stack;
	EXPECT_TRUE(stack.empty());
}

TEST(AuxStack, SingleValue) {
	AuxStack<int> stack;

	EXPECT_TRUE(stack.empty());

	stack.push(1);

	EXPECT_EQ(stack.top(), 1);
	EXPECT_FALSE(stack.empty());
}

TEST(AuxStack, MultipleValues) {
	// values: 1,2,3,0
	AuxStack<int> stack;

	stack.push(1);
	EXPECT_EQ(stack.top(), 1);
	EXPECT_EQ(stack.max(), 1);

	stack.push(2);
	EXPECT_EQ(stack.top(), 2);
	EXPECT_EQ(stack.max(), 2);

	stack.push(3);
	EXPECT_EQ(stack.top(), 3);
	EXPECT_EQ(stack.max(), 3);

	stack.push(0);
	EXPECT_EQ(stack.top(), 0);
	EXPECT_EQ(stack.max(), 3);

	stack.pop();
	EXPECT_EQ(stack.max(), 3);

	stack.pop();
	EXPECT_EQ(stack.max(), 2);

	stack.pop();
	EXPECT_EQ(stack.max(), 1);

	stack.pop();
	EXPECT_TRUE(stack.empty());
}


