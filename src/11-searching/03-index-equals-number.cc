#include "03-index-equals-number.h"

bool index_equals_number(const std::vector<int>& values) {
	int l = 0, u = values.size() - 1;

	while (l <= u) {
		int m = l + ((u-l) >> 1);

		if (values[m] == m) {
			return true;

		} else if (values[m] > m) {
			u = m - 1;

		} else {
			l = m + 1;
		}
	}
	return false;
}

