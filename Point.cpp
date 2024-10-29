#include "Point.h"

Point::Point(double x, double y): scaleX (1) , scaleY(1) //constructor of a point
{
	X = x;
	Y = y;
}
double Point::getX() const {//returns x
	return X * scaleX;
}
double Point::getY() const {//returns y
	return Y * scaleY;
}
void Point::setX(double x) {//x changer
	X = x;
}
void Point::setY(double y) {//y changer
	Y = y;
}
void Point::setScaleX(double scaleX) {//scale x changer
	this->scaleX = scaleX;
}
void Point::setScaleY(double scaleY) {//scale y changer
	this->scaleY = scaleY;
}
