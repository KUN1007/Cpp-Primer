#include<iostream>
#include<deque>
#include<string>

void input() {
    std::deque<std::string> kun;
    std::string yuyu;
    while (std::cin >> yuyu) {
        kun.push_back(yuyu);
    }
    for (auto i : kun) 
        std::cout << i << '\n';
}

int main() {
    input();
    return 0;
}