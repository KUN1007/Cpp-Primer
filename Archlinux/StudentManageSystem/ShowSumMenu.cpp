#include<iostream>

class StudentInfo {
public:
    StudentInfo();

    void showSumMenu();
    
    ~StudentInfo();
};

StudentInfo::StudentInfo() {

}

void StudentInfo::showSumMenu() {
    std::cout << "********************************************" << '\n';
    std::cout << "** 1. Show All Student Infomation         **" << '\n';
    std::cout << "** 2. Add a new Student Info              **" << '\n';
    std::cout << "** 3. Delete an Existed Student's Info    **" << '\n';
    std::cout << "** 4. Specifies the Information Output    **" << '\n';
    std::cout << "** 4. Specifies the Information Output    **" << '\n';
    std::cout << "********************************************" << '\n';
}

StudentInfo::~StudentInfo() {

}

int main() {
    StudentInfo student;
    student.showSumMenu();
    return 0;
}

