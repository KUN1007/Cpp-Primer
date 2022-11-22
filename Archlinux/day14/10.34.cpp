#include<iostream>
#include<vector>
#include<algorithm>

void kun() {
    std::vector<int> yuyu{ 1, 2, 3, 4, 5, 6 };
    for (auto i = yuyu.rbegin(); i != yuyu.rend();) {
        std::cout << *i++ << "  ";
    }
}

int main() {
    kun();
    return 0;
}