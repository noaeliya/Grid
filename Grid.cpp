#include "Grid.h"
#include <cstddef>

/*
Noa Asraf 
ID: 213443385
EX 1 
*/

Grid::Grid(double tileW, double tileH, int width, int height, int color) : R_arr ( new Rectangle * [width * height])//Department constructor of grid

{
	int index = 0;
	m_size = width * height;
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			R_arr[index] = new Rectangle(i * tileW, j * tileH, tileW, tileH, color);
			index++;
		}
	}
}
Rectangle* Grid::getRectAtPoint(const Point& p) {//Returns if the points exist inside the rectangle 
	for (int i = 0; i < m_size; i++) {
		if (R_arr[i]->contains(p))
			return R_arr[i];
	}
}
Rectangle* Grid::getRectAtIndex(int i) { return R_arr[i]; }//Returns the position of the rectangle

void Grid::moveGrid(double deltaLeft, double deltaTop) {//move position of the rectangle
	for (int i = 0; i < (m_size); i++)
	{
		R_arr[i]->moveRect(deltaLeft, deltaTop);
	}
}

void Grid::scaleGrid(double rectWidth, double rectHeight) {// move position of the grid
	for (int i = 0; i < (m_size); i++)
	{
		R_arr[i]->scaleRect(rectWidth, rectHeight);
	}
}


Grid::~Grid() {//distructor of grid
	for (int i = 0; i < (m_size); i++)
	{
		delete R_arr[i];
	}
	delete[] R_arr;
	R_arr = NULL;
	m_size = 0;
}

