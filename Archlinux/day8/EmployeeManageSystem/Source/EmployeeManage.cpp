#include "/home/kun/Desktop/Work/code/Cpp_Learning/Archlinux/day8/EmployeeManageSystem/Head/EmployeeManage.h"

EmployeeManage::EmployeeManage() {

}

void EmployeeManage::showMenu() {
    cout << "*******************************" << '\n';
    cout << "Welcome to Employee Manage System" << '\n';
    cout << "0. Exit manage system" << '\n';
    cout << "1. Add Employee infomation" << '\n';
    cout << "2. Display Employee infomation" << '\n';
    cout << "3. Delete leave employee" << '\n';
    cout << "4. Change employee infomation" << '\n';
    cout << "5. Find employee infomation" << '\n';
    cout << "6. Sort by employee number" << '\n';
    cout << "7. Clear all files" << '\n';
    cout << "*******************************" << '\n';
    cout << '\n';
}

EmployeeManage::~EmployeeManage() {

}