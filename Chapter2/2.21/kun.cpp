#include<iostream>

int main(){
	int i = 0;
	double *dp = &i;
	std::cout << *dp << " " << dp << std::endl;
	return 0;
}