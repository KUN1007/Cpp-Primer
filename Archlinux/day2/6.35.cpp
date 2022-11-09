#include<iostream>

int fib(int i);

int main() {
    std::cout << fib(3);
    return 0;
} 

int fib(int i) {
    if (i < 1)
        return 1;
    // fib(i--)     false, undefined value
    return fib(i - 1) * i;
}