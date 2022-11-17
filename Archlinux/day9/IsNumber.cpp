#include<iostream>
#include<vector>

int main() {
    int m = 0, n = 0, num = 0;
    std::vector<int> vec;
    std::cin >> m >> n;
    if (m || n || m >= 10 || n >= 10) {
        return 0;
    }
    while (m != 0) {
        vec.push_back(num);
        for (auto i : vec) {
            if (num == i) {
                std::cout << "Yes";
            } else {
                std::cout << "No";
            }
        }
        m--;
        num = 0;
    }
    
    return 0;
}