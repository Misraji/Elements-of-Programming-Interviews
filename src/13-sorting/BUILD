cc_library (
	name = "sorting",
	hdrs = [
		"00-quicksort.h",
	],
	srcs = [
		"00-quicksort.cc",
	],
)

cc_test (
	name = "all_tests",
	srcs = [
		"00-quicksort_test.cc"
	],
	deps = [
		":sorting",
		"@googletest//:gtest_main",
	],
)

cc_test (
	name = "current_test",
	srcs = ["00-quicksort_test.cc"],
	deps = [
		":sorting",
		"@googletest//:gtest_main",
	],
)
