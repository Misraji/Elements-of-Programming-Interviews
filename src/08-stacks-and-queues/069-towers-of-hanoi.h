#ifndef SAQ_069_TOWERS_OF_HANOI_H
#define SAQ_069_TOWERS_OF_HANOI_H

#include <array>
#include <iostream>
#include <stack>

void move_tower_of_hanoi(const int n);

void move_tower_of_hanoi(std::ostream& out, const int n);

void transfer_tower_of_hanoi(std::ostream& out, const int n, 
					std::array<std::stack<int>, 3>& pegs, 
					const int from, const int to, const int use);

#endif  // AQ_069_TOWERS_OF_HANOI_H
