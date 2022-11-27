#include<iostream>
#include<vector>

std::vector<int> *CreateVec() {
    return new std::vector<int>;
}

void LoadVec(std::vector<int> *v) {
    int num;
    while (std::cin >> num) {
        v->push_back(num);
    }
}

void PrintVec(std::vector<int> *v) {
    for (auto i : *v) {
        std::cout << i << " ";
    }
}

void kun() {
    std::vector<int> *yuyu = CreateVec();
    LoadVec(yuyu);
    PrintVec(yuyu);
    delete yuyu;
    yuyu = nullptr;
}

int main() {
    kun();
    return 0;
}