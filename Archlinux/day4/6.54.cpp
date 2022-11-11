#include<iostream>
#include<vector>

// int (*fn(std::vector))(int a, int b);

int fn(int a, int b);
std::vector<decltype(fn)* > kun;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int dis(int a, int b) {
    return a / b;
}

void printVec(int a, int b, int (*p)(int, int)) {
    std::cout << p(a, b) << std::endl;
}

int main() {
    int num1 = 1007, num2 = 10;
    decltype(add) *p1 = add, *p2 = sub, *p3 = mul, *p4 = dis;
    kun = { p1, p2, p3, p4 };
    for (auto i : kun) {
        printVec (num1, num2, i);
    }
    return 0;
}