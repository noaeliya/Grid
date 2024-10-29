#ifndef _POINT
#define _POINT

using namespace std;

class Point//class of points on coordinate system
{
	double X;//x
	double Y;
	double scaleX;//scaling to x
	double scaleY;//scaling to y

public:
	Point(double x, double y);

public:
	double getX() const;
	double getY() const;
	void setX(double x);
	void setY(double y);
	void setScaleX(double scaleX);
	void setScaleY(double scaleY);
};

#endif