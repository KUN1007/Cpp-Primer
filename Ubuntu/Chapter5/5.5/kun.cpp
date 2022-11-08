#include<iostream>
#include<vector>

using namespace std;

/*
int main() {
	vector<int> cent;
	vector<string> grade{ "E", "D", "C", "B", "A", "A++" };
	vector<string> final_grade;
	int cents = 0;
	while (cin >> cents)
		cent.push_back(cents);

	for (auto a : cent) {
		if (a < 60)
			final_grade.push_back(grade[0]);
		else {
			final_grade.push_back(grade[(a - 50) / 10]);
			if (a != 100)
				if (a % 10 > 7)
					final_grade.push_back((grade[(a - 50) / 10]) += "+");
				else if (a % 10 < 3)
					final_grade.push_back((grade[(a - 50) / 10]) += "-");
		}
	}

	for (auto i : final_grade)
		cout << i << "  " << endl;
	return 0;
}
*/

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

	if (j == 9)
		level = "A";
	else if (j == 8)
		level = "B";
	else if (j == 7)
		level = "C";
	else 
		level = "D";

	if (i >= 7)
		sign = "+";
	if (i <=3)
		sign = "-";
	final_grade = level + sign;
	cout << final_grade << endl;
	return 0;
}