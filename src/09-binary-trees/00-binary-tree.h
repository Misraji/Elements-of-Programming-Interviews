#ifndef BINARY_TREES_00_BINARY_TREE_H
#define BINARY_TREES_00_BINARY_TREE_H

#include <memory>

template<typename T> 
struct BinaryTree;

template<typename T>
using BinaryTreePtr = std::shared_ptr<BinaryTree<T>>;

template<typename T>
BinaryTreePtr<T> NullBinaryTree() {
	return static_cast<BinaryTreePtr<T>>(nullptr);
}

template<typename T>
struct BinaryTree {
	T data;
	BinaryTreePtr<T> left, right;
};

template<typename T>
BinaryTreePtr<T> make_tree(const T& data, BinaryTreePtr<T> left, BinaryTreePtr<T> right) {
	return std::shared_ptr<BinaryTree<T>>(new BinaryTree<T>{data, left, right});
}

template<typename T>
BinaryTreePtr<T> make_leaf(const T& data) {
	return std::shared_ptr<BinaryTree<T>>(new BinaryTree<T>{data, NullBinaryTree<T>(), NullBinaryTree<T>()});
}

#endif
