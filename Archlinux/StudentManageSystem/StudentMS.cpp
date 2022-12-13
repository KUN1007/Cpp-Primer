#include<iostream>
#include<string>

#include<iostream>
#include<fstream>
#define KUN "StudentInfo.txt"

void init();

int main() {
	init();
	return 0;
}

class StudentManage {
public:
	StudentManage();
	
	// Show menu 
	void ShowSumMenu();

	// Add a student
	void AddStudent(std::string name, int S_no, int age, std::string gender, int drom, std::string NAT);

	// Show student info
	void ShowInfo();

	// Exit system
	void ExitSystem();

	~StudentManage();
};

StudentManage::StudentManage() {

}

void StudentManage::ShowSumMenu() {
	std::cout << "******************************************************" << '\n';
	std::cout << "** 0. Exit Student Manage System *********************" << '\n';
	std::cout << "** 1. Add a Student Info *****************************" << '\n';
	std::cout << "** 2. Delete a Student Info **************************" << '\n';
	std::cout << "** 3. Show ALL Student Information *******************" << '\n';
	std::cout << "** 4. Show all Student Information(GROUP BY drom) ****" << '\n';
	std::cout << "** 5. Show all Student Information(GROUP BY gender) **" << '\n';
	std::cout << "** 6. Show all Student Information(NAT effective) ****" << '\n';
	std::cout << "** 7. Clear ALL FILES! *******************************" << '\n';
	std::cout << "******************************************************" << '\n';
}

void StudentManage::ExitSystem() {
	std::cout << "Welcome to use next time" << '\n';
	exit(0);
}

StudentManage::~StudentManage() {

}

void StudentManage::AddStudent(std::string name, int S_no, int age, std::string gender, int drom, std::string NAT) {
	std::cout << "Enter student info:(format name[string] number[int] age[int] gender[string] drom[int] NAT[string])" << "\n";
	std::cin >> name >> S_no >> age >> gender >> drom >> NAT;

	std::fstream ofs;
	ofs.open(KUN, std::ios::app);

	ofs << name << " " << S_no << " " << age << " " << gender << " " << drom << " " << NAT << "\n";
	std::cout << '\n';
	ofs.close();
}

void StudentManage::ShowInfo() {
	std::ifstream ifs;
	ifs.open(KUN, std::ios::in);
	if (!ifs.is_open()) {
		std::cout << "Failed to open file, StudentInfo.txt is not exist!" << '\n';
		ifs.close();
		exit(-1);
	}
	char arr[1024] = { 0 };
	while (ifs.getline(arr, sizeof(arr))) {
		std::cout << arr << '\n';
	}
	ifs.close();
}

void init() {
	StudentManage student;

	int choice = 0;

	while (true) {
		student.ShowSumMenu();

		int S_no = 0;
		int age = 0;
		int drom = 0;
		std::string name;
		std::string gender;
		std::string NAT;

		std::cout << "Enter your choice" << '\n';
		std::cin >> choice;

		switch (choice)
		{
		case 0: // Exit Student Manage System
			student.ExitSystem();
			break;
		case 1: // Add a Student Info
			student.AddStudent(name, S_no, age, gender, drom, NAT);
			break;
		case 2: // Delete a Student Info
			break;
		case 3: // Show ALL Student Information
			student.ShowInfo();
			break;
		case 4: // Show all Student Information(GROUP BY drom)
			break;
		case 5: // Show all Student Information(GROUP BY gender)
			break;
		case 6: // Show all Student Information(NAT effective)
			break;
		case 7: // Clear ALL FILES!
			break;
		default:
			system("cls");
			break;
		}
	}
}
