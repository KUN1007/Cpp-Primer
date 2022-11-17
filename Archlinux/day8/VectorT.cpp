#include<iostream>
#include<vector>

template<typename T>
void add(T &str, T &num) {
    return str + num;
}

std::string fn(std::string a, std::string b);
std::vector<decltype(fn)* > kun;

/* std::string add(std::string a, std::string b) {
    return a + b;
} */

void printVec(std::string a, int b, std::string (*p)(std::string, int)) {
    std::cout << p(a, b) << '\n';
}

/* int main() {
    std::string str1{"kun"};
    int num1 = 1007;
    add *p1 = add;
    kun = { p1 };
    for (auto i : kun) {
        printVec (str1, num1, i);
    }
    return 0;
} */