#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<iterator>

void kun() {
    std::vector<int> yuyu{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::list<int> azkhx;
    for (auto i = yuyu.crbegin() + 3; i != yuyu.crend() - 2; ++i) {
        azkhx.push_back(*i);
    }
    std::ostream_iterator<int> iter(std::cout, "    ");
    std::copy(azkhx.begin(), azkhx.end(), iter);
    std::cout << '\n';
    for (auto i : azkhx)
        std::cout << i << '\n';
}

int main() {
    kun();
    return 0;
}