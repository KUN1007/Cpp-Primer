#include<iostream>

void fcn3() {
    size_t v1 = 42;
    auto f = [v1]() mutable { return ++v1; };
    v1 = 0;
    auto j = f();
    std::cout << j << '\n';
}

void fcn4() {
    size_t v1 = 42;
    auto f2 = [&v1] { return ++v1; };
    v1 = 0;
    auto j = f2();
    std::cout << j << '\n';
}

void kun() {
    fcn3();
    fcn4();
}

int main() {
    kun();
    return 0;
}