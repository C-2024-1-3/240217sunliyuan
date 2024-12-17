#include <iostream>
using namespace std;

class Student
{
public:
	string Student_ID;
	int score;
};

string max(Student* p, int size)
{
	int max = p[0].score;
	string ID = p[0].Student_ID;
	for (int i = 1; i < size; i++)
	{
		if (p[i].score > max)
		{
			max = p[i].score;
			ID = p[i].Student_ID;
		}
	}
	return ID;
}

int main()
{
	Student StudentArray[5]{ {"1", 90}, {"2", 85}, {"3", 95}, {"4", 88}, {"5", 92} };
	string ID = max(StudentArray, 5);
	cout << "成绩最高的同学的学号是" << ID << endl;
}