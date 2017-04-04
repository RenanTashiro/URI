#include <iostream>
#include <cmath>

using namespace std;

class Point 
{
private:
	double x1, x2, y1, y2;
public:
	Point(double, double, double, double);
	double dist();
};

Point::Point(double x1, double y1, double x2, double y2)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

double Point::dist()
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main()
{
	double x1, x2, y1, y2;
	
	cin >> x1 >> y1 >> x2 >> y2;

	Point point(x1, y1, x2, y2);
	
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << point.dist() << endl;
}
