#include<iostream>
#include<vector>

void InsertSort(std::vector<int> &vec) {
    int l = 0;
    for (; l != vec.size(); ++l) {
        int r = l;
        for (int i = l + 1; i < vec.size(); ++i) {
            if (vec[i] < vec[r])
                r = i;
        }
        int temp = vec[l];
        vec[l] = vec[r];
        vec[r] = temp;
    }
}

void kun() {
    std::vector<int> yuyu{ 3, 5, 2, 9, 5, 7, 4 };
    InsertSort(yuyu);
    for (auto i : yuyu) {
        std::cout << i << ' ';
    }
}

int main() {
    kun();
    return 0;
}