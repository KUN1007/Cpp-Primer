#include<iostream>

int sum(std::initializer_list<int> list);

int main() {
    std::initializer_list<int> kun{10, 7, 1007};
    std::cout << sum(kun);
}

int sum(std::initializer_list<int> list) {
    int sum = 0;
    for (auto i = list.begin(); i != list.end(); ++i) {
        sum += *i;
    }
    return sum;
}
