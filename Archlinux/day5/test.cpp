#include<iostream>
#include<vector>

void reverseVec(std::vector<int> &a) {
    auto beg = a.begin();
    auto end = a.end();
    for (; beg < end - 1; ++beg, --end) {
        int temp = *beg;
        *beg = *(beg + (end - beg) - 1);
        *(beg + (end - beg) - 1) = temp;
    }
}

int main() {
    std::vector<int> kun{1, 2, 3, 4, 5 };

    for (decltype(kun.begin()) i = kun.begin(); i != kun.end(); ++i) {
        std::cout << "iterator: " << *i << '\n';
    }
    for (auto i : kun) {
        std::cout << i;
    }
    std::cout << '\n';
    reverseVec(kun);
    for (auto i : kun) {
        std::cout << i;
    }
    return 0;
}
