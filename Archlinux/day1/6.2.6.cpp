#include<iostream>

int main(int argc, char **argv) {
    for (int i = 0; i != argc; ++i) {
        std::cout << "argc: " << i << " argv: " << argv[i] << std::endl;
    }
    // std::cout << argv[0];
}