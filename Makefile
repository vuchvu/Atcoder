.PHONY: clean fmt

SRC:=$(wildcard *.cpp)

a.out: $(firstword $(SRC))
	g++ -std=gnu++20 -O2 -DONLINE_JUDGE -DATCODER \
	-Wall -Wextra \
	-mtune=native -march=native \
	-fconstexpr-depth=2147483647 -fconstexpr-loop-limit=2147483647 -fconstexpr-ops-limit=2147483647 \
	-I/opt/ac-library -I/opt/boost/gcc/include -L/opt/boost/gcc/lib \
	-o $@ $(firstword $(SRC)) \
	-I/usr/include/eigen3

clean:
	rm a.out

fmt:
	clang-format $(SRC) -i
