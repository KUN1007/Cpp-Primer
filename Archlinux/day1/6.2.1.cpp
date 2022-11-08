#include<iostream>

int ret(int i, int *p);

int main() {
    int i = 1007;
    int j = 7;
    std::cout << ret(i, &j);
}

int ret(int i, int *p) {
    return i > *p ? i : *p;
}