#include<iostream>

void swap(int *a, int *b);

int main() {
    int i = 1007;
    int j = 10;
    swap(&i, &j);
    std::cout << i << " " << j;
}

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}