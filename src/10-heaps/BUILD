cc_library (
	name = "heap",
	hdrs = [
		"00-heap.h",
		"00-heap-sort.h"
	],
)

cc_test (
	name = "00-heap-sort_test",
	srcs = ["00-heap-sort_test.cc"],
	deps = [
		":heap",
		"@googletest//:gtest_main",
	],
)
