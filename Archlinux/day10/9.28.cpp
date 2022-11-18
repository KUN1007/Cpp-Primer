#include<iostream>
#include<forward_list>
#include<string>

void kun(std::forward_list<std::string> &fl, std::string str1, std::string str2) {
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    bool flag = false;
    while (curr != fl.end()) {
        if (*curr == str1) {
            curr = fl.insert_after(curr, str2);
            flag = true;
        }
        prev = curr;
        curr++;
    }
    if (!flag) {
        fl.insert_after(prev, str2);
    }
}

int main() {
    std::forward_list<std::string> yuyu{"kun", "yuyu", "azkhx"};
    std::string str1 = "kun";
    std::string str2 = "1007";
    kun(yuyu, str1, str2);
    for (auto i : yuyu)
        std::cout << i << '\n';
    return 0;
}
