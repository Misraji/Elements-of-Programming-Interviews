cc_library (
	name = "binary-tree",
	hdrs = [
		"00-binary-tree.h",
		"01-balanced-tree.h",
	], 
	visibility = ["//visibility:public"],
)

cc_test (
	name = "01-balanced-tree_test",
	srcs = [ "01-balanced-tree_test.cc" ],
	deps = [
		 ":binary-tree",
		 "@googletest//:gtest_main",
	],
)
