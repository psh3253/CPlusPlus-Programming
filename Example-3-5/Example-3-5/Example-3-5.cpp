#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point();
	Point(int a, int b);
	void Show()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

Point::Point() : Point(0, 0)
{

}

Point::Point(int a, int b) : x(a), y(b)
{

}

int main()
{
	Point origin;
	Point target(10, 20);
	origin.Show();
	target.Show();
}