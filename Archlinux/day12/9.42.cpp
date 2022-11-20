#include<iostream>
#include<string>
#include<vector>

void kun(std::string &str) {
    str.reserve(100);
    char c;
    while (std::cin >> c)
        str.push_back(c);
}

int main() {
    std::string str;
    kun(str);
    std::cout << str << '\n';
    return 0;
}
