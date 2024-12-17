#include <iostream>
#include "student.h"            // 不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         // 在类外定义display类函数
{
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}
Student::Student()
{
    Student::set_value();
}

Student::Student(int num, string name, char sex)
{
    this->num = num;
    this->name = name;
    this->sex = sex;
}

void Student::set_value() 
{
    num = 0;
    name = "sly";
    sex = 'm';
}