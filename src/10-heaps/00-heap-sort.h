#ifndef HEAP_00_HEAP_SORT_H
#define HEAP_00_HEAP_SORT_H

#include "00-heap.h"

template<typename T>
void heap_sort(std::vector<T> &values) {

	Heap<T> h(values);
	h.create_heap();
        
    for(int i = (h.heap_len-1); i > 0; i--) {
		std::swap(h.values[0], h.values[i]);
        h.heap_len--;
        h.max_heapify(0);
    } 
}

#endif // HEAP_00_HEAP_SORT_H
