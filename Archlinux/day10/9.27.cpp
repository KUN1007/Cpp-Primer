#include<iostream>
#include<forward_list>

void kun(std::forward_list<int> &fl) {
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr & 1) {
            curr = fl.erase_after(prev);
        } else {
            prev = curr;
            curr++;
        }
    }
    for (auto i : fl)
        std::cout << i << '\n';
}

int main() {
    std::forward_list<int> yuyu{1, 2, 3, 4, 5, 6, 7};
    kun(yuyu);
    return 0;
}