#include<iostream>
#include<list>
#include<forward_list>

void ListSelect(std::list<int> &ls) {
    auto beg = ls.begin();
    while (beg != ls.end()) {
        if (*beg & 1) {
            beg = ls.insert(beg, *beg);
            beg++;
            beg++;
        } else {
            beg = ls.erase(beg);
        }
    }
    for (auto i : ls) {
        std::cout << i << '\n';
    }
}

void ForwardListSelect(std::forward_list<int> &fls) {
    auto beg = fls.before_begin();
    auto curr = fls.begin();
    while (curr != fls.end()) {
        if (*curr & 1) {
            curr = fls.insert_after(curr, *curr);
            beg = curr;
            curr++;
        } else {
            curr = fls.erase_after(beg);
        }
    }
    for (auto i : fls) {
        std::cout << i << '\n';
    }
}
void kun() {
    std::list<int> yuyu{1, 2, 3, 4, 5, 6, 7};
    std::forward_list<int> azkhx{1, 2, 3, 4, 5, 6, 7};
    ListSelect(yuyu);
    ForwardListSelect(azkhx);
}

int main() {
    kun();
    return 0;
}