/* /home/kun/Desktop/Work/code/Cpp_Learning/Archlinux/day2/6.30.cpp:16:13: error: return-statement with no value, in function returning ‘bool’ [-fpermissive]
   16 |             return;
      |             ^~~~~~ */

#include<iostream>

bool str_subrange(const std::string &str1, const std::string &str2);

int main() {
    return 0;
}

bool str_subrange(const std::string &str1, const std::string &str2) {
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i])
            return false;
    }
    return true;
}