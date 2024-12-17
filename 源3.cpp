#include <iostream>
using namespace std;

class Point
{
public:
	Point()
	{
		x = 60;
		y = 80;
	}

	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}

	void display()
	{
		cout << "x=" << x << " y=" << y << endl;
	}

private:
	int x;
	int y;
};

int main()
{
	Point p1, p2;
	p1.setPoint(10, 20);
	p1.display();
	p2.display();
}