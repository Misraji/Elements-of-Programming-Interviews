cc_library (
	name = "saq",
	hdrs = [
		"067-max-stack.h",
		"068-rpn-notation.h",
		"068-print-bst.h",
		"069-towers-of-hanoi.h",
	],
	srcs = [
		"068-rpn-notation.cc",
		"069-towers-of-hanoi.cc",

	],
	deps = [
		"//src/14-bst:bst",
	],
)

cc_test (
	name = "all_tests",
	srcs = [
		"067-max-stack_test.cc",
		"068-rpn-notation_test.cc",
		"068-print-bst_test.cc",
		"069-towers-of-hanoi_test.cc",
	],
	deps = [
		":saq",
		"@googletest//:gtest_main",
	],
)

cc_test (
	name = "current_test",
	srcs = [
		"069-towers-of-hanoi_test.cc",
	],
	deps = [
		":saq",
		"@googletest//:gtest_main",
	],
)
