#ifndef SEARCHING_02_FIRST_ELEMENT_LARGER
#define SEARCHING_02_FIRST_ELEMENT_LARGER

#include <vector>

template<typename T>
int first_element_larger_than_k(std::vector<T>& values, const T& t) {

	int result = -1;
	int l = 0, u = values.size() - 1;

	while (l <= u) {
		int m = l + ((u-l) >> 1);

		if (values[m] > t) {
			result = m;
			u = m - 1;

		} else {
			l = m + 1;
		}	
	}
	return result;
}

#endif // SEARCHING_02_FIRST_ELEMENT_LARGER
