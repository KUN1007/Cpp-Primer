#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<functional>

using std::string;

bool check_size(const string &s, string::size_type sz) {
    return s.size() > sz;
}

void biggies(std::vector<int> &vc, const string &s) {
    auto p = find_if(vc.begin(), vc.end(), bind(check_size, s, std::placeholders::_1));
    std::cout << p - vc.begin() + 1 << '\n';
}

void kun() {
    std::vector<int> vc = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    biggies(vc, "KUN");
    biggies(vc, "CUTEST!");
}

int main() {
    kun();
    return 0;
}