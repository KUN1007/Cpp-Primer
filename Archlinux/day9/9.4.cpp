#include<iostream>
#include<vector>

bool find(std::vector<int>::iterator beg, std::vector<int>::iterator end, int &b) {
    for (; beg != end; ++beg) {
        if (*beg == b) {
            return true;
        }
    }
    return false;
}

int main() {
    return 0;
}