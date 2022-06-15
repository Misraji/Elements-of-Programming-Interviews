#ifndef SAQ_01_MAX_STACK_H
#define SAQ_01_MAX_STACK_H

#include <stack>
#include <utility>

template<typename T>
class MaxStack {
	public:
		const bool empty(void) const {
			return s_.empty();
		}

		const T& top(void) const {
			if (empty() == false) {
				return s_.top().first;
			}
			throw std::length_error("empty stack");
		}

		const T& max(void) const {
			if (empty() == false) {
				return s_.top().second;
			}
			throw std::length_error("empty stack");
		}

		void pop() {
			if (empty() == false) {
				s_.pop();
			}
		}

		void push(const T& x) {
			s_.emplace(x, std::max(x, empty()? x: s_.top().second));
		}

	private:
		std::stack<std::pair<T, T>> s_;
};


template<typename T>
class AuxStack {
	public:
		const bool empty(void) const {
			return s_.empty();
		}

		const T& max(void) const {
			if (empty() == false) {
				return aux_.top().first;
			}
			throw std::length_error("empty stack");
		}

		const T& top(void) const {
			if (empty() == false) {
				return s_.top();
			}
			throw std::length_error("empty stack");
		}

		void pop() {
			if (empty() == false) {
				T top = s_.top();
				s_.pop();

				if (top == aux_.top().first) {
					--aux_.top().second;
					if (aux_.top().second == 0) {
						aux_.pop();
					}
				}
				return;
			}
			throw std::length_error("empty stack");
		}

		void push(const T& x) {
			s_.emplace(x);
			if (aux_.empty() == false) {
				if (x == aux_.top().first) {
					++aux_.top().second;

				} else if (x > aux_.top().first) {
					aux_.emplace(x, 1);
				}

			} else {
				aux_.emplace(x,1);
			}
		}

	private:
		std::stack<T> s_;
		std::stack<std::pair<T, int>> aux_;
};

#endif  // SAQ_01_MAX_STACK_H
