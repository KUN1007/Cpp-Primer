#include<iostream>
#include<map>
#include<string>
#include<algorithm>

void kun() {
    std::map<std::string, size_t> word_count;
    std::string word;
    while (std::cin >> word)
        ++word_count[word];
    for (const auto &i : word_count)
        std::cout << i.first << " appears " << i.second << '\n';
}

int main() {
    kun();
    return 0;
}