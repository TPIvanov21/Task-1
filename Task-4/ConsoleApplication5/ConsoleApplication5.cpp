#include <iostream>
using namespace std;


class Point
{
	int x;
	int y;
	int z;
public:
	Point()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	Point(int newX, int newY, int newZ)
	{
		x = newX;
		y = newY;
		z = newZ;		
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	int getZ()
	{
		return z;
	}
	void setX(int newValue)
	{
		x = newValue;
	}
	void setY(int newValue)
	{
		y = newValue;
	}
	void setZ(int newValue)
	{
		z = newValue;
	}
};

int main()
{
	Point p1;
	Point p2(1, 2, 3);
	cout << p1.getX() << " " << p1.getY() << " " << p1.getZ() << endl;
	cout << p2.getX() << " " << p2.getY() << " " << p2.getZ() << endl;

	p1.setX(10);
	p1.setY(20);
	p1.setZ(30);

	p2.setX(100);
	p2.setY(200);
	p2.setZ(300);

	cout << p1.getX() << " " << p1.getY() << " " << p1.getZ() << endl;
	cout << p2.getX() << " " << p2.getY() << " " << p2.getZ() << endl;
}

