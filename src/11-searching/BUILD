cc_library (
	name = "searching",
	hdrs = [
		"01-first-element.h",
		"02-first-element-larger.h",
		"03-index-equals-number.h",
		"04-cyclically-sorted-list.h",

	],
	srcs = [
		"01-first-element.cc",
		"03-index-equals-number.cc",
		"04-cyclically-sorted-list.cc",
	],
)

cc_test (
	name = "all_test",
	srcs = [
		"01-first-element_test.cc",
		"02-first-element-larger_test.cc",
		"03-index-equals-number_test.cc",
		"04-cyclically-sorted-list_test.cc",
	],
	deps = [
		":searching",
		"@googletest//:gtest_main",
	],
)

cc_test (
	name = "current_test", 
	srcs = [
		"04-cyclically-sorted-list_test.cc",
	],
	deps = [
		":searching",
		"@googletest//:gtest_main",
	],
)
