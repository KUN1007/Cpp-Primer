#include<iostream>
#include<vector>

bool CompareVec(std::vector<int> vec1, std::vector<int> vec2) {
    if (vec1.size() != vec2.size())
        return false;
    for (auto i = vec1.begin(), j = vec2.begin(); i != vec1.end(); ++i, ++j) {
        if (*i != *j)
            return false;
    }
    return true;
}

void kun() {
    std::vector<int> kun{1, 2, 3};
    std::vector<int> yuyu{1, 2, 3};
    std::cout << CompareVec(kun, yuyu) << '\n';
    std::cout << (kun == yuyu) <<'\n';
}

int main() {
    kun();
    return 0;
}
