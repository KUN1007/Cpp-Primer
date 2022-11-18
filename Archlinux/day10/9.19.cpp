#include<iostream>
#include<list>
#include<string>

void input() {
    std::list<std::string> kun;
    std::string yuyu;
    while (std::cin >> yuyu)
        kun.push_back(yuyu);
    for (auto i : kun)
        std::cout << i << '\n';
}

int main() {
    input();
    return 0;
}