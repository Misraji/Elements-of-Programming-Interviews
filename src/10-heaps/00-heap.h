#ifndef HEAPS_00_HEAP_H
#define HEAPS_00_HEAP_H

#include <algorithm>
#include <vector>

namespace {

inline int parent(int i) {
	return i/2;
}

inline int left_child(int i) {
	return 2*i;
}

inline int right_child(int i) {
	return ((2*i) + 1);
}

} // namespace

template<typename T>
struct Heap {
	public:
		Heap(std::vector<T> &a) : values(a), heap_len(0) { }
		std::vector<T>& values;
		int heap_len;

		void max_heapify(int parent);
		void create_heap();
};



template<typename T>
void Heap<T>::max_heapify(int parent) {

	int left = left_child(parent);
	int right = right_child(parent);
	int max ;

	max = parent;
	if ((left < heap_len) && (values[left] > values[parent])) {
		max = left;	
	}

	if ((right < heap_len) && (values[right] > values[max])) {
		max = right;	
	}

	if (max != parent) {
		std::swap(values[max], values[parent]);
		max_heapify(max);
	}
}

template<typename T>
void Heap<T>::create_heap() {
	heap_len = values.size();

	for(int i = heap_len/2; i >= 0; i--) {
		max_heapify(i);
	}
}

#endif // HEAP_00_HEAP_H
