#include "Rectangle.h"

int Rectangle::m_count = 0;


Rectangle::Rectangle(double left, double top, double width, double height, int color) : TopLeft(left,top),BottomRight(left+width,top+height)//constructor of a rectangle

{
	++m_count;
	this->color = color;
}

int Rectangle::getColor() const {//Returns the color
	return color;
}
Point& Rectangle::getTopLeftPoint() {//Returns TopLeftPoint
	return TopLeft;
}
Point& Rectangle::getBottomRightPoint() {//Returns BottomRightPoint
	return BottomRight;
}
void Rectangle::setColor(int color) {//Color changer
	this->color = color;
}
bool Rectangle::contains(const Point& p) {//Returns whether the rectangle contains the point
	return (BottomRight.getX() >= p.getX() && p.getX() >= TopLeft.getX() && BottomRight.getY() >= p.getY() && p.getY() >= TopLeft.getY());
}
void Rectangle::moveRect(double deltaLeft, double deltaTop) {//move position of the rectangle
	TopLeft.setX(TopLeft.getX() + deltaLeft);//move x
	TopLeft.setY(TopLeft.getY() + deltaTop);
	BottomRight.setX(BottomRight.getX() + deltaLeft);
	BottomRight.setY(BottomRight.getY() + deltaTop);
}
void Rectangle::scaleRect(double rectWidth, double rectHeight) {//defines a new scaleRect

	double deltaX = BottomRight.getX() - TopLeft.getX();
	double deltaY = BottomRight.getY() - TopLeft.getY();

	TopLeft.setScaleX(rectWidth / deltaX);
	TopLeft.setScaleY(rectHeight / deltaY);
	BottomRight.setScaleX(rectWidth / deltaX);
	BottomRight.setScaleY(rectHeight / deltaY);

}