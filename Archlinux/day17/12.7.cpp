#include<iostream>
#include<vector>
#include<memory>

std::shared_ptr<std::vector<int>> CreateVec() {
    return std::make_shared<std::vector<int>> ();
} 

void LoadVec(std::shared_ptr<std::vector<int>> v) {
    int num;
    while (std::cin >> num) {
        v->push_back(num);
    }
}

void PrintVec(std::shared_ptr<std::vector<int>> v) {
    for (auto i : *v) {
        std::cout << i << " ";
    }
}

void kun() {
    // std::shared_ptr<std::vector<int>> yuyu = CreateVec();
    auto yuyu = CreateVec();
    LoadVec(yuyu);
    PrintVec(yuyu);
}

int main() {
    kun();
    return 0;
}