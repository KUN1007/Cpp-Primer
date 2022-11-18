#include<iostream>
#include<vector>
#include<list>

void kun() {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    std::vector<int> kun;
    std::list<int> yuyu;
    for (int i = 0; i != sizeof(ia) / sizeof(ia[0]); ++i) {
        kun.push_back(ia[i]);
        yuyu.push_back(ia[i]);
    }
    // kun.assign(ia, ia + 11);
    // yuyu.assign(ia, ia + 11);

    auto i = kun.begin();
    while (i != kun.end()) {
        if (!(*i & 1)) {
            i = kun.erase(i);
            // ++i;
        } else {
            ++i;
        }
    }

    auto j = yuyu.begin();
    while (j != yuyu.end()) {
        if (*j & 1) {
            j = yuyu.erase(j);
            // ++j;
        } else {
            ++j;
        }
    }
    
    for (auto m : kun)
        std::cout << m << '\n';
    for (auto n : yuyu)
        std::cout << n << '\n';    
}

int main() {
    kun();
    return 0;
}
