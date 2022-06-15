#ifndef SAQ_068_PRINT_BST_H
#define SAQ_068_PRINT_BST_H

#include "src/14-bst/00-bst.h"

#include <iostream>
#include <stack>
#include <sstream>

template<typename T>
void print_bst_in_sorted_order(std::ostream& out, typename BinarySearchTree<T>::NodePtr n) {
	std::stack<typename BinarySearchTree<T>::NodePtr> s;
	typename BinarySearchTree<T>::NodePtr curr = n;

	while (!s.empty() || curr) {
		if (curr) {
			s.push(curr);
			curr = curr->left;

		} else {
			curr = s.top();
			s.pop();
			out << curr->key << ",";
			curr = curr->right;
		}
	}
}

template<typename T> 
void print_bst_in_sorted_order(typename BinarySearchTree<T>::NodePtr n) {
	print_bst_in_sorted_order(std::cout, n);
}

#endif  // SAQ_068_PRINT_BST_H
