#include "069-towers-of-hanoi.h"

void move_tower_of_hanoi(const int n) {
	move_tower_of_hanoi(std::cout, n);	
}

void move_tower_of_hanoi(std::ostream& out, const int n) {
	std::array<std::stack<int>, 3> pegs;
	// initialize pegs
	for(int i = n; i > 0; i--) {
		pegs[0].push(i);
	}

	transfer_tower_of_hanoi(out, n, pegs, 0, 2, 1);
}

void transfer_tower_of_hanoi(std::ostream& out, const int n, 
			std::array<std::stack<int>, 3>& pegs, 
			const int from, const int to, const int use) {

	if (n > 0) {
		transfer_tower_of_hanoi(out, n-1, pegs, from, use, to);
		const int top = pegs[from].top();
		pegs[from].pop();
		pegs[to].push(top);
		out << "Moved " << top << " from peg " << from << " to peg " << to << std::endl;
		transfer_tower_of_hanoi(out, n-1, pegs, use, to, from);
	}
}
