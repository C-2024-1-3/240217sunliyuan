#include <iostream>
using namespace std;
class Cuboid
{
public:
	void basis()
	{
		double length, width, height;
		cout << "Enter length, width and height of the cuboid: ";
		cin >> length >> width >> height;
		this->length = length;
		this->width = width;
		this->height = height;
	}
	void Volumn()
	{
		cout << "Ìå»ýÊÇ" << length * width * height << endl;
	}

private:
	double length;
	double width;
	double height;

};

int main()
{
	Cuboid cuboid1, cuboid2, cuboid3;
	cuboid1.basis();
	cuboid2.basis();
	cuboid3.basis();
	cuboid1.Volumn();
	cuboid2.Volumn();
	cuboid3.Volumn();
}