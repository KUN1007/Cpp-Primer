#include<iostream>
#include<list>
#include<algorithm>

void kun() {
    std::list<int> li = { 0, 1, 2, 3, 5, 0, 6 };
    auto last_z = std::find(li.rbegin(), li.rend(), 0);
    last_z++;
    int p = 1;
    for (auto iter = li.begin(); iter != last_z.base(); iter++, p++);
    if (p > li.size())
        std::cout << "0 is not exist" << '\n';
    else 
        std::cout << p << '\n';
}

void CommonMethod() {
    std::list<int> li = { 0, 1, 2, 3, 5, 0, 6 };
    auto prev = std::find(li.begin(), li.end(), 0);
    if (prev == li.end())
        std::cout << "0 is not exist" << '\n';
    else {
        auto curr = prev;
        while (curr != li.end()) {
            prev =curr;
            curr++;
            curr = find(curr, li.end(), 0);
        }
        int p = 1;
        for (auto iter = li.begin(); iter != prev; iter++, p++);
        std::cout << p << '\n';
    }
}

int main() {
    kun();
    CommonMethod();
    return 0;
}