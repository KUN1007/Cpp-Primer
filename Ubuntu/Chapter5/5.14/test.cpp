#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::vector<std::string> ss{};
    std::vector<int> count{};
    std::string input;
    bool flag = 1;
    while (std::cin >> input) {
        for (size_t i = 0; i < ss.size(); ++i) {
            if (ss[i] == input) {
                ++count[i];
                flag = 0;
            }
        }
        if (flag) {
            ss.push_back(input);
            count.push_back(1);
        }
    }
    int k = 0, max = 0;
    for (size_t i = 0; i < ss.size(); ++i) {
        if (count[i] > max) {
            k = i;
            max = count[i];
        }
    }
    std::cout << "Word " << ss[k] << " appeared " << max << " times, whitch is max appearences";
}