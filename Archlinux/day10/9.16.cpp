#include<iostream>
#include<vector>
#include<list>

bool CompareVecList(std::vector<int> &vec, std::list<int> &lis) {
    if (vec.size() != lis.size())
        return false;
    auto lb = lis.begin();
    auto le = lis.end();
    auto vb = vec.begin();
    for (; lb != le; ++lb, ++vb)
        if (*lb != *vb)
            return false;
    return true;
}

void kun() {
    std::vector<int> kun{1, 2, 3, 4};
    std::list<int> yuyu{1, 2, 3};
    std::cout << CompareVecList(kun, yuyu);
}

int main() {
    kun();
    return 0;
}