cc_library (
	name = "saq",
	hdrs = [
		"01-max-stack.h",
		"02-rpn-notation.h",
	],
	srcs = [
		"02-rpn-notation.cc",
	],
)

cc_test (
	name = "all_tests",
	srcs = [
		"01-max-stack_test.cc",
		"02-rpn-notation_test.cc",
	],
	deps = [
		":saq",
		"@googletest//:gtest_main",
	],
)

cc_test (
	name = "current_test",
	srcs = [
		"02-rpn-notation_test.cc",
	],
	deps = [
		":saq",
		"@googletest//:gtest_main",
	],
)
