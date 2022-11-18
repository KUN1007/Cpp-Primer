#include<iostream>
#include<vector>

void kun(std::vector<int> &vec) {
    std::cout << vec.at(0);
    std::cout << vec[0];
    std::cout << vec.front();
    std::cout << *vec.begin();
}

int main() {
    std::vector<int> yuyu{};
    kun(yuyu);
    return 0;
}