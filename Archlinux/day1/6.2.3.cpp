#include<iostream>

void print(int i);
void printArray(const int arr[], size_t size);

int main() {
    int i = 0, j[2] = {0, 1};
    // auto a = std::begin(j);
    // auto b = sizeof(j) / sizeof(*j);
    print(i);
    printArray(j, std::end(j) - std::begin(j));
}

void print(int i) {
    std::cout << i;
}

void printArray(const int arr[], size_t size) {
    for (size_t i = 0; i != size; ++i) {
        std::cout << arr[i];
    }
}