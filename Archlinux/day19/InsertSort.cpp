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

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        for (auto i = nums.begin(); i != nums.end(); ++i) {
            *i = *i * *i;
        }
        int l = 0;
        for (; l != nums.size(); ++l) {
        int r = l;
        for (int i = l + 1; i < nums.size(); ++i) {
            if (nums[i] < nums[r])
                r = i;
        }
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
        }
        return nums;
    }
};

int main() {
    kun();
    return 0;
}