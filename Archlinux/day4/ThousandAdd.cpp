#include<iostream>
#include<vector>
#include<algorithm>
/* 
std::vector<int> loadVec() {
    int i = 0;
    std::vector<int> kun;
    while (std::cin >> i){
        kun.push_back(i);
    }
    std::reverse(kun.begin(), kun.end());
    return kun;
}

std::vector<int> addVec(const std::vector<int> &a, const std::vector<int> &b) {
    std::vector<int> result;
    if (a.empty() && !b.empty())
        return b;
    if (b.empty() && !a.empty())
        return a;
    if (a.empty() && b.empty())
        return result;
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    return result;
}
 */
void reverseVec(std::vector<int> &a) {
    // auto mid = a.begin() + ((a.end() - a.begin()) >> 1);
    // std::vector<int>::iterator mid = (a.end() - a.begin()) / 2;
    // std::cout << a[*mid] << std::endl;;
    for (auto i = a.begin(), j = a.end() - 1; i < j; ++i) {
        std::cout << *i << *j << std::endl;
        int temp = a[*i];
        a[*i] = a[*j];
        a[*j] = temp;
    }
/*     while ((a.begin() != a.end()) && (a.begin() != --a.end()))
    {
        std::iter_swap(a.begin(), a.end());
        ++a.begin();
    } */
    
}

std::vector<int> addVec(std::vector<int> &a, std::vector<int> &b) {
    if (a.empty() && !b.empty())
        return b;
    if (b.empty() && !a.empty())
        return a;
    if (a.empty() && b.empty())
        return a;
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    std::vector<int> c;
    int temp = 0;
    size_t i = a.size() > b.size() ? a.size() : b.size();
    for (size_t j = 0; j != i; ++j) {
        if (j < a.size()) {
            temp += a[j];
        }
        if (j < b.size()) {
            temp += b[j];
        }
        // std::cout << "temp: " << temp << std::endl;
        c.push_back(temp % 10);
        temp /= 10;
    }
    if (temp) c.push_back(1);
    std::reverse(c.begin(), c.end());
    return c;
}

int main() {
    std::vector<int> kun{1, 2, 3, 4, 5, 6, 7, 1, 0, 0, 7};
    std::vector<int> yuyu{9, 2, 3, 4, 5, 1, 3};
    for (auto i : kun) {std::cout << std::endl;
        std::cout << i;
    }
    std::cout << std::endl;
    for (auto i : yuyu) {
        std::cout << i;
    }
    std::cout << std::endl; 
    std::vector<int> result = addVec(kun, yuyu);
    std::cout << std::endl;
    for (auto i : result) {
        std::cout << i;
    } 
    return 0;
}