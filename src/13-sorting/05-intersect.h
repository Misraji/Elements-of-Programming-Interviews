#ifndef SORTING_05_INTERSECT_H
#define SORTING_05_INTERSECT_H

#include <vector>

template<typename T>
std::vector<T> intersect(const std::vector<T>& list1, const std::vector<T>& list2) {
	std::vector<T> result;
	
	auto itr1 = list1.begin();
	auto itr2 = list2.begin();

	while (itr1 != list1.end() && itr2 != list2.end()) {
		if (*itr1 == *itr2) {
			result.push_back(*itr1);
			++itr1; ++itr2;

		} else if (*itr1 < *itr2) {
			++itr1;

		} else {
			++itr2;
		}
	}
	return result;
}

#endif  // SORTING_05_INTERSECT_H
