#pragma once
using namespace std;
class Student              // ������
{
public:                   // ���ó�Ա����ԭ������
    void display();
    Student();
    Student(int num, std::string name, char sex);
    void set_value();
private:
    int num;
    string name;
    char sex;
};