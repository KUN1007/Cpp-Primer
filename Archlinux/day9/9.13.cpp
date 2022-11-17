#include<iostream>
#include<vector>
#include<list>

int main() {
    std::list<int> kun{ 1, 2, 3 };
    // std::vector<int> yu(kun);
    std::vector<int> yuyu(kun.begin(), kun.end());
    std::vector<double> azkhx(yuyu.begin(), yuyu.end());
    return 0;
}