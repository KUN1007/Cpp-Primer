#include<iostream>
#include<string>

void print(const char *p) {
	if (p)
		while (*p)
			std::cout << *p++ << std::endl;;
}

int main() {
	char str[] = ("KUN IS CUTEST!");
	print(str);
	return 0;
}