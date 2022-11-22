#include<iostream>

template<class T>
int TAdd(T &a, T &b) {
   return a + b; 
}

int myAdd(int &a, int &b) {
    return a + b;
}

void kun() {
    int a = 10;
    int b = 7;
    char c = 'k';
    char d = 'u';
    TAdd(c, d);
    TAdd(a, b);
    myAdd(a, b);
}

int main() {
    kun();
    return 0;
}