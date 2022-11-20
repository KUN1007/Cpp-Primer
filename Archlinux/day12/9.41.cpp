#include<iostream>
#include<vector>
#include<string>

void kun() {
    std::vector<char> yuyu{'K', 'U', 'N'};
    std::string str(yuyu.data(), yuyu.size());
    std::cout << str << '\n';
}

int main() {
    kun();
    return 0;
}
