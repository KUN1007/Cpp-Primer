#include<iostream>

void kun(const int &num) {
    auto sum = [num](const int num1) {return num + num1;};
    std::cout << sum(10) << '\n';
}

int main() {
    kun(7);
    return 0;
}
