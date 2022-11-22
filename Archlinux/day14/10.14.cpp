#include<iostream>

int main() {
    int a = 10, b = 7;
    auto sum = [](const int &a, const int &b) {return a + b;};
    std::cout << sum(a, b) << '\n';  
    return 0;
}