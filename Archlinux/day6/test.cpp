#include<iostream>
#include<vector>

std::string fn(std::string a, std::string b);
std::vector<decltype(fn)* > kun;

std::string add(std::string a, std::string b) {
    return a + b;
}

void printVec(std::string a, std::string b, std::string (*p)(std::string, std::string)) {
    std::cout << p(a, b) << '\n';
}

int main() {
    std::string str1{"kun"}, str2{"yuyu"};
    decltype(add) *p1 = add;
    kun = { p1 };
    for (auto i : kun) {
        printVec (str1, str2, i);
    }
    return 0;
}