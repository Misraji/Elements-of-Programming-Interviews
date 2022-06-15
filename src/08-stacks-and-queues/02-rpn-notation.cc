#ifndef SAQ_02_RPN_H
#define SAQ_02_RPN_H

#include "02-rpn-notation.h"

#include <stack>
#include <sstream>

int eval(const std::string& s) {
	if (s.empty()) {
		throw std::length_error("no input provided");
	}

	std::stack<int> eval_stack;
	std::stringstream ss(s);
	std::string symbol;

	while(std::getline(ss, symbol, ',')) {
		if (symbol == "+" || symbol == "-"  || symbol == "*" || symbol == "/") {
			int y = eval_stack.top();
			eval_stack.pop();

			int x = eval_stack.top();
			eval_stack.pop();

			switch (symbol.front()) {
				case '+':
					eval_stack.emplace(x+y);
					break;
				case '-':
					eval_stack.emplace(x-y);
					break;
				case '*':
					eval_stack.emplace(x*y);
					break;
				case '/':
					eval_stack.emplace(x/y);
					break;
			}	
		} else {
			eval_stack.emplace(std::stoi(symbol));
		}
	}

	return eval_stack.top();
}

#endif  // SAQ_02_RPN_H
