#include<iostream>
#include<list>
#include<deque>

void kun() {
    std::list<int> kun{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::deque<int> deq1;
    std::deque<int> deq2;
    for (auto i = kun.begin(); i != kun.end(); ++i) {
        // if (*i % 2) {
        if (*i & 1) {
            deq1.push_back(*i);
        } else if (!(*i & 1)) {
            deq2.push_back(*i);
        }
    }
    for (auto i : deq1)
        std::cout << "deq1: " << i << '\n';

    for (auto i : deq2)
        std::cout << "deq2: " << i << '\n';
}

int main() {
    kun();
    return 0;
}