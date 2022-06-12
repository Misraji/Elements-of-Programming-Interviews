cc_library (
	name = "bst",
	hdrs = [
		"00-bst.h",
	],
	srcs = [
	],
)

cc_test (
	name = "all_tests",
	srcs = [
		"00-bst_test.cc",
	],
	deps = [
		":bst",
		"@googletest//:gtest_main",
	],
)

cc_test (
	name = "current_test",
	srcs = ["00-bst_test.cc"],
	deps = [
		":bst",
		"@googletest//:gtest_main",
	],
)
