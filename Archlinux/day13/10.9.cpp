#include<iostream>
#include<vector>
#include<algorithm>

void kun(std::vector<int> &vec) {
    sort(vec.begin(), vec.end());
    auto last_iter =  unique(vec.begin(), vec.end());
    vec.erase(last_iter, vec.end());
}

int main() {
    std::vector<int> yuyu{1, 1, 1, 2, 4, 5, 5, 6, 7};
    kun(yuyu);
    for (auto i : yuyu)
    std::cout << i << '\n';
    return 0;
}
