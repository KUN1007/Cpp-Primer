#include<iostream>
#include<cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string str;
	while (cin >> str)
		if (!str.empty())
			for (decltype(str.size()) i = 0; i < str.size(); ++i)
				if (!isspace(str[i]))
					cout << str[i];
	return 0;
}

// optimization

/*
#include<iostream>
#include<cctype>

int main() {
	std::string str("KUN IS CUTEST~!");
	std::string temp;

	for (auto& c : str) {
		if (!isspace(c))
			temp += c;
	}
	std::cout << temp << std::endl;
	return 0;
}
*/



// reference

/*
#include <iostream>
#include <cctype>

int main()
{
    std::string str = "hello. worl.d";
    std::string tmp_str;
    for (auto &c : str)
    {
        if (!ispunct(c))
        {
            tmp_str = tmp_str + c;
        }
    }

    str = tmp_str;

    std::cout << str << std::endl;

    return 0;
}
*/