#ifndef _GRID
#define _GRID
#include "Rectangle.h"


using namespace std;

class Grid //class of Grid
{
	int m_size;
	Rectangle** R_arr; // Array of pointers to rectangles  

public:
	Grid(double tileW, double tileH, int width, int height, int color); //Department constructor of grid

	~Grid();

public:
	Rectangle* getRectAtPoint(const Point& p);//Returns if the points exist inside the rectangle 
	Rectangle* getRectAtIndex(int i);//Returns the position of the rectangle

public:
	void moveGrid(double deltaLeft, double deltaTop);
	void scaleGrid(double rectWidth, double rectHeight);
};

#endif
