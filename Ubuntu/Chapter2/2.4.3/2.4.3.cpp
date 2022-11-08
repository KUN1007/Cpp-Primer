#include<iostream>

int main() {
    int i = 0;
    int *const p1 = &i;
    i = 20;
    const int ci = 42;
    const int *p2 = &ci;
    double dval = 3.1;
    const double pi = 3.14;
    const double *ptr = &pi;
    ptr = &dval;
    dval = 10;
    std::cout << *p1;
    return 0;
}