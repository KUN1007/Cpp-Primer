#include<iostream>
#include<vector>
#include<string>

void kun() {
    std::vector<std::string> kun;
    auto i = kun.begin();
    std::string yuyu;
    while (std::cin >> yuyu)
        i = kun.insert(i, yuyu);
    for (auto i : kun)
        std::cout << i << '\n';
}

void yuyu() {
    std::vector<std::string> sev;
    auto iter = sev.begin();
    std::string word;
    while (std::cin >> word) {
        iter = sev.insert(iter, word);
    }
}

int main() {
    kun();
    return 0;
}