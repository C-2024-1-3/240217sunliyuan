#include <iostream>
#include "student.h"            // ��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         // �����ⶨ��display�ຯ��
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