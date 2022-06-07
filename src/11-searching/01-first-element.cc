#include "01-first-element.h"

#include <algorithm>
#include <string>

int bsearch(const int t, const std::vector<int>& arr) {
	int result = -1;
	int l = 0, u = arr.size() - 1;
	
	while (l <= u) {
		int m = l + ((u-l)>>1);
		
		if (arr[m] == t) {
			result = m;
			u = m - 1;

		} else if (arr[m] > t) {
			u = m - 1;

		} else {
			l = m + 1;
		}
	}

	return result;
}

