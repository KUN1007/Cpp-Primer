#include<iostream>
#include<fstream>

void kun() {
    std::fstream kun;
    kun.open("kun.txt", std::ios::out);

    kun << "KUN IS CUTEST!" << '\n';
}

int main() {
    kun();
    return 0;
}