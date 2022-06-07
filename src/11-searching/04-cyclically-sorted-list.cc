#include "04-cyclically-sorted-list.h"

int smallest_element(const std::vector<int>& values) {
	if (values.empty()) {
		return -1;
	}

	int l = 0, u = values.size() - 1;

	while (l < u) {
		int m = l + ((u-l)>>1);
		if (values[m] > values[u]) {
			l = m + 1;

		} else {
			u = m;
		}
	}
	return l;
}
