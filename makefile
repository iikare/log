CC=clang++
CXXFLAGS= --std=c++20 -Wall -Werror -pedantic -O3

all: test

test:
	$(CC) $(CXXFLAGS) sample/test.cc -o sample/test 
	./sample/test
	@rm -f ./sample/test

