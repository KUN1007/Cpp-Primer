#include<iostream>

using namespace std;

int main() {
	unsigned grade = 0;
	cin >> grade;
	string final_grade;
	// final_grade = (grade > 90) ? "high pass"
	// 						: (grade < 75 && grade >= 60) ? "low pass"
	// 						: (grade < 60) ? "fail" : "pass";

	if (grade > 90)
		final_grade = "high pass";
	else if (grade < 75 && grade >= 60)
		final_grade = "low pass";
	else if (grade < 60)
		final_grade = "fail";
	else
		final_grade = "pass";

	cout << final_grade << endl;
	return 0;
}