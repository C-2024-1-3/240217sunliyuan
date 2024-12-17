#pragma once
using namespace std;
class Student              // 类声明
{
public:                   // 公用成员函数原型声明
    void display();
    Student();
    Student(int num, std::string name, char sex);
    void set_value();
private:
    int num;
    string name;
    char sex;
};