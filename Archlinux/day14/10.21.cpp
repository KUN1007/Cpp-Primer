#include<iostream>

void kun() {
    int a = 7;
    auto f = [a]() mutable -> bool { if (a > 0) { a--; return false;} else return true; };
    for (int i = 0; i < a + 3; ++i) {
        std::cout << f() << '\n';
    }
}

int main() {
    kun();
    return 0;
}