#include<iostream>

using namespace std;

int main() {
	int score = 0;
	cin >> score;
	if (score < 0 || score > 100) {
		cout << "invalid input" << endl;
		return -1;
	}
	if (score == 100) {
		cout << "A++" << endl;
		return 0;
	}
	if (score < 60) {
		cout << "E" << endl;
		return 0;		
	}

	int i = score % 10;
	int j = score / 10;
	string level, sign, final_grade;
	level = ((j == 9) ? "A"
						: (j == 8) ? "B"
						: (j == 7) ? "C"
						: (j == 6) ? "D" : "");
	sign = ((i >= 8) ? "+" : (i <= 3) ? "-" : "");
	final_grade = level + sign;
	cout << final_grade << endl;
	return 0;
}