#include<iostream>

std::string make_plural(size_t sz, const std::string &str, const std::string ending= "s") {
    return (sz > 1) ? str + ending : str;
}

int main() {
    std::cout << "The plural of 'success' is: " << make_plural(2, "success", "es") << std::endl;
    std::cout << "The plural of 'failure' is: " << make_plural(2, "failure");
    return 0;
}
