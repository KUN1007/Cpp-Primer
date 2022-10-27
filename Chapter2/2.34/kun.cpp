#include<iostream>

using namespace std;

void test() {
	int i = 0, & r = i;
	auto a = r;

	const int ci = i, & cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;

	const auto f = ci;

	auto& g = ci;
	// auto& h = 42;        // ERROR
	const auto& j = 42;

	auto k = ci, & l = i;
	auto& m = ci, * p = &ci;       // const int
	// auto& n = i, * p2 = &ci;       // ERROR

	a = 42;
	b = 42;
	c = 42;
	// d = 42;
	// e = 42;
	// f = 42;
	// g = 42;


}