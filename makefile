.PHONY: all

CXXFLAGS:=-std=c++17
all: travis-cpp-sandbox
	@valgrind ./$<
