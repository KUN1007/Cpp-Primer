#include<iostream>
#include<vector>

int main() {
    int m = 0, n = 0, num = 0;
    std::vector<int> vec;
    std::cin >> m >> n;
    if (m || n || m >= 10 || n >= 10) {
        std::cout << "Invalid input!";
        return 0;
    }
    
    while (m != 0) {
        std::cin >> num;
        vec.push_back(num);
        m--;
        num = 0;
    }

    while (n != 0) {
        std::cin >> num;
        for (auto i : vec) {
            if (i == num) {
                std::cout << "Yes" << '\n';
                break;
            } else {
                std::cout << "No" << '\n';
                break;
            }
        }
        n--;
    }
    return 0;
}