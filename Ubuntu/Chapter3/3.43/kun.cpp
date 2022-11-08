#include<iostream>

using namespace std;

/*
int main() {
	constexpr size_t row = 3, col = 4;
	int arr[row][col];
	for (size_t i = 0; i < row; ++i) {
		for (size_t j = 0; j < col; ++j) {
			arr[i][j] = i * col + j;
		}
	}

	for (int (&row)[4] : arr)
		for (int &col : row)
			cout << col << endl;

	cout << "------------------" << endl;

	for (int i = 0; i != row; ++i)
		for (int j = 0; j != col; ++j)
			cout << arr[i][j] << endl;

	cout << "------------------" << endl;

	for (int (*i)[4] = arr; i != arr + 3; ++i)
		for (int *j = *i; j != *i + 4; ++j)
			cout << *j << endl;
	
	return 0;
}
*/

/*
int main() {
	constexpr size_t row = 3, col = 4;
	int arr[row][col];
	for (size_t i = 0; i < row; ++i) {
		for (size_t j = 0; j < col; ++j) {
			arr[i][j] = i * col + j;
		}
	}

	using kun = int[4];

	for (kun &row : arr)
		for (int &col : row)
			cout << col << endl;

	cout << "------------------" << endl;

	for (int i = 0; i != row; ++i)
		for (int j = 0; j != col; ++j)
			cout << arr[i][j] << endl;

	cout << "------------------" << endl;

	for (kun *i = arr; i != arr + 3; ++i)
		for (int *j = *i; j != *i + 4; ++j)
			cout << *j << endl;
	
	return 0;
}
*/

int main() {
	constexpr size_t row = 3, col = 4;
	int arr[row][col];
	for (size_t i = 0; i < row; ++i) {
		for (size_t j = 0; j < col; ++j) {
			arr[i][j] = i * col + j;
		}
	}

	for (auto &row : arr)
		for (auto &col : row)
			cout << col << endl;

	cout << "------------------" << endl;

	for (auto i = 0; i != row; ++i)
		for (auto j = 0; j != col; ++j)
			cout << arr[i][j] << endl;

	cout << "------------------" << endl;

	for (auto i = arr; i != arr + 3; ++i)
		for (auto j = *i; j != *i + 4; ++j)
			cout << *j << endl;
	
	return 0;
}
