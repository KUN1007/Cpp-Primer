#include<iostream>

int main() {
	int num1 = 0, num2 = 0;
	while (std::cin >> num1 >> num2) {
		if (num2 == 0)
			throw std::runtime_error("The divsior cannot be zero");
		try {
			std::cout << (num1 / num2) << std::endl;
		} catch (runtime_error err) {
			std::cout << error.what()
					  << "Try Again ? Enter y/n"
			char flag;
			cin >> flag;
			if (!cin || flag == 'n')
				break;
		}		
	}
	return 0;
}