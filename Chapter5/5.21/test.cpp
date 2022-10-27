#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::vector<std::string> ss{};
    std::vector<int> count{};
    std::string input;
    for (; std::cin >> input;) {
        for (int i = 0; i < ss.size(); i++) {
            if (ss[i] == input) {
                ++count[i];
                goto next;
            }
        }
        ss.push_back(input);
        count.push_back(1);
    next:
        continue;
    }
    int k = -1, max = 0;
    for (int i = 0; i < ss.size(); ++i) {
        if (count[i] > max) {
            k = i;
            max = count[i];
        }
    }
    std::cout << "Word " << ss[k] << " appeared " << max << " times, whitch is most";
}