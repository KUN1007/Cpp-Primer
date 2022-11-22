#include<iostream>
#include<vector>

void printVector(std::vector<int> vec, size_t index);
void print(std::vector<int> vec, unsigned index);

int main() {
    std::vector<int> kun{ 7, 10, 1007 };
    printVector(kun, kun.size());
    std::cout << "------------------" << std::endl;
    print(kun, 0);
    return 0;
}

void printVector(std::vector<int> vec, size_t index) {
    if (!vec.empty() && index != 0) {
        // std::cout << vec[index] << std::endl;    False, must to use index - 1
        std::cout << vec[index - 1] << std::endl;
        printVector(vec, index - 1);
    }
}

void print(std::vector<int> vec, unsigned index) {
    unsigned size = vec.size();
    if (!vec.empty() && index < size) {
        std::cout << vec[index] << std:: endl;
        print(vec, index + 1);
    }
}
