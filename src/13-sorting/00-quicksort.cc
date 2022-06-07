#include "00-quicksort.h"

#include <algorithm>

int partition(std::vector<int>& values, int lower, int upper) {
	const int target = values[upper];

	int index = lower;
	for(int i = lower; i < upper; i++) {
		if (values[i] <= target) {
			std::swap(values[index++], values[i]);			
		}
	}
	std::swap(values[index], values[upper]);
	return index;
}

void quicksort(std::vector<int> &values, int lower, int upper) {
	if(lower < upper) {
		int index = partition(values, lower, upper);
		quicksort(values, lower, index-1);
		quicksort(values, index+1, upper);
	}
}


void quicksort(std::vector<int> &values) {
	quicksort(values, 0, values.size() - 1);
}
