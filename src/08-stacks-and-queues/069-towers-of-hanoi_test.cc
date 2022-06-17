#include <gtest/gtest.h>

#include "069-towers-of-hanoi.h"

#include <sstream>

TEST(TOH, Empty) {
	std::ostringstream out;
	move_tower_of_hanoi(out, 0);
	EXPECT_EQ(out.str(), "");
}

TEST(TOH, SingleValue) {
	std::ostringstream out;
	move_tower_of_hanoi(out, 1);
	EXPECT_EQ(out.str(), "Moved 1 from peg 0 to peg 2\n");
}

TEST(TOH, TwoValues) {
	std::ostringstream out;
	move_tower_of_hanoi(out, 2);
	EXPECT_EQ(out.str(),	"Moved 1 from peg 0 to peg 1\n"
							"Moved 2 from peg 0 to peg 2\n"
							"Moved 1 from peg 1 to peg 2\n");
}
