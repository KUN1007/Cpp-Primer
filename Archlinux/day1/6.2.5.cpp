#include<iostream>

int main(int argc, char **argv) {
    std::string str;
    for (int i = 0; i != argc; ++i) {
        str += argv[i];
    }
    std::cout << str;
    return 0;
}