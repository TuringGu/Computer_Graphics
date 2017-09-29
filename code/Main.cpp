// Test

#include "stdafx.h"
#include "LineDDA.h"

void main()
{
	int x1 = 100, y1 = 100, x2 = 500, y2 = 300;
	initgraph(640, 480);
	LineDDA(x1, y1, x2, y2, YELLOW);// draw a straight line
	getch();
	closegraph();
}
