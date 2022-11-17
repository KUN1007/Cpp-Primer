#include<iostream>
#include<vector>

std::vector<int>::iterator find(std::vector<int>::iterator beg,
    std::vector<int>::iterator end, int &b) {
    for (; beg != end; ++beg) {
        if (*beg == b) {
            return beg;
        }
    }
    return end;
}

int main() {
    return 0;
}