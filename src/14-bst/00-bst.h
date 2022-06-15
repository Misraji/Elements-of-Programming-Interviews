#ifndef BST_00_BST_H
#define BST_00_BST_H

#include <memory>

template<typename T>
class BinarySearchTree {
	public:
		struct Node;
		typedef std::shared_ptr<Node> NodePtr;

		struct Node {
			T key;
			NodePtr left, right;	

			void Clear();
		};

		BinarySearchTree(void) {} 
		~BinarySearchTree() {
			Clear();
		}

		bool Empty() const {
			return root_ == nullptr;
		}

		void Clear();

		bool Find(const T& key) const;

		bool Insert(const T& key);

		bool Erase(const T& key);

		const NodePtr root() const { 
			return root_ ; 
		}

	private:
		NodePtr root_;

};

template<typename T>
void BinarySearchTree<T>::Clear() {
	if (root_) {
		root_->Clear();
		root_ = nullptr;
	}
}

template<typename T>
void BinarySearchTree<T>::Node::Clear() {
	if (left) {
		left->Clear();
		left = nullptr;
	}
	if (right) {
		right->Clear();
		right = nullptr;
	}
}

template<typename T>
bool BinarySearchTree<T>::Find(const T& key) const {
	auto current = root_;
	while (current && current->key != key) {
		if (current->key > key) {
			current = current->left;

		} else {
			current = current->right;
		}
	}
	return current != nullptr;
}

template<typename T>
bool BinarySearchTree<T>::Insert(const T& key) {
	auto node = std::make_shared<Node>();
	node->key = key;

	if (!root_) {
		root_ = node;
		return true;
	}

	auto current = root_;
	NodePtr prev = nullptr;

	while (current) {
		prev = current;

		if (key == prev->key) {
			return false;

		} else if (key > current->key) { 
			current = current->right;

		} else {
			current = current->left;
		}
	}

	if (key > prev->key) {
		prev->right = node;

	} else {
		prev->left = node;
	}
	return true;
}

template<typename T>
bool BinarySearchTree<T>::Erase(const T& key) {

	if (!root_) {
		return false;
	}

	NodePtr current = root_;
	NodePtr prev;

	while (current && current->key != key) {
		prev = current;
		if (current->key > key) {
			current = current->left;

		} else {
			current = current->right;
		}
	}

	// Element not found.
	if (!current) {
		return false;
	}

	auto target_node = current;

	if (current->left) {

		prev = current;
		current = current->left;

		while(current->right) {
			prev = current;
			current = current->right;
		}

		std::swap(target_node->key, current->key);

	} else if (current->right) {

		prev = current;
		current = current->right;

		while (current->left) {
			prev = current;
			current = current->left;
		}

		std::swap(target_node->key, current->key);

	} else {
		// current node is a leaf. Do nothing.
	}

	if (!prev) {
		// We are deleting the root.
		root_ = nullptr;

	} else if (prev->left == current) {
		prev->left = nullptr;

	} else {
		prev->right = nullptr;
	}

	return true;
}

template<typename T>
std::unique_ptr<BinarySearchTree<T>> CreateBST(const std::vector<T> &keys) {
	auto bst = std::unique_ptr<BinarySearchTree<T>>(new BinarySearchTree<T>());
	for(const auto& key : keys) {
		bst->Insert(key);
	}
	return bst;
}

#endif  // BST_00_BST_H
