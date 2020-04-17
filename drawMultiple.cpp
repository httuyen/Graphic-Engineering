#include "drawMultiple.h"
#include "lineMidPoint.h"
#include <iostream>
void DDA(int xA, int yA, int xB, int yB, int color) {
	int dx = xB - xA;
	int dy = yB - yA;
	int step;
	if (abs(dx) > abs(dy))
		step = abs(dx);
	else
		step = abs(dy);
	float x_inc = (float)dx / step;
	float y_inc = (float)dy / step;
	float x = xA;
	float y = yA;
	putpixel(x, y, color);
	for (int k = 1; k <= step; k++) {
		x = x + x_inc;
		y = y + y_inc;
		putpixel(round(x), round(y), color);
	}
}
void drawMultiple(Dinh d[],int n,int color) {
	for (int i = 0; i < n; i++) {
		int j = (i + 1) % n;
		DDA(d[i].x, d[i].y, d[j].x, d[j].y,color);
	}
}
void veHCN() {

}
void veTG(){

}