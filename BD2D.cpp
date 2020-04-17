#include "BD2D.h"
void TinhDX(int x1, int y1,int newx,int newy,int &dx,int&dy) {
	dx = newx - x1;
	dy = newy - y1;
}

void Quay(int &x1, int &y1,int newx,int newy,float alpha) {
	int dx=0, dy=0;
	TinhDX(newx, newy, screenWidth / 2 + 100, Y2 / 2, dx, dy);
	x1+=dx; y1+=dy;
	changeTD(x1, y1);
	int x2 = x1, y2 = y1;
	x1 = x2*cos((alpha / 180)*PI) - y2*sin((alpha / 180)*PI);
	y1 = x2*sin((alpha / 180)*PI) + y2*cos((alpha / 180)*PI);
	x1 -= dx; y1 -= dy;
	changeTD1(x1, y1);
}
void QuayO(int &x1, int &y1, int newx, int newy, float alpha) {
	changeTD(x1, y1);
	int x2 = x1;
	int y2 = y1;
	x1 = x2*cos((alpha / 180)*PI) - y2*sin((alpha / 180)*PI);
	y1 = x2*sin((alpha / 180)*PI) + y2*cos((alpha / 180)*PI);
	changeTD1(x1, y1);
}
void DXO(int &x1,int &y1) {
	int dx, dy;
	dx = screenWidth / 2 + 100 - x1;
	dy = Y2 / 2 - y1;
	x1 = x1 + (2 * dx);
	y1 = y1 + (2 * dy);
}
void DXOx(int &y1) {
	int dy;
	dy = Y2 / 2 - y1;
	y1 = y1 + (2 * dy);
}
void DXOy(int &x1) {
	int dx;
	dx = screenWidth / 2 + 100 - x1;
	x1 = x1 + (2 * dx);
}
void DXPoint(int &x1,int &y1,int newx,int newy) {
	int dx = newx - x1;
	x1 = x1 + (2 * dx);
	int dy = newy - y1;
	y1 = y1 + (2 * dy);
}
void BDTLV1(int &x1,int &y1,int &x2,int &y2,int &x3,int &y3,int &x4,int &y4,int &x5,int &y5,int &x6,int &y6,int &x7,int &y7,int &x8,int &y8,int &x9,int &y9,int &x10,int &y10,float n,int &r) {
	if (n == 2) {
		x1 = x1*n;
		y1 = y1*n;
		x2 = x2*n;
		y2 = y2*n;
		x3 = x3*n;
		y3 = y3*n;

		x4 = x4*n;
		y4 = y4*n;
		x5 = x5*n;
		y5 = y5*n;
		x6 = x6*n;
		y6 = y6 *n;

		x7 = x7 *n;
		y7 = y7*n;
		x8 = x8*n;
		y8 = y8 *n;
		x9 = x9*n;
		y9 = y9*n;
		x10 = x10*n;
		y10 = y10*n;
		r = r*n;
	}
	else if (n == 3) {
		x1 = x1*n;
		y1 = y1*n;
		x2 = x2*n;
		y2 = y2*n;
		x3 = x3*n;
		y3 = y3*n;

		x4 = x4*n;
		y4 = y4*n;
		x5 = x5*n;
		y5 = y5*n;
		x6 = x6*n;
		y6 = y6 *n;

		x7 = x7 *n;
		y7 = y7*n;
		x8 = x8*n;
		y8 = y8 *n;
		x9 = x9*n;
		y9 = y9*n;
		x10 = x10*n;
		y10 = y10*n;
		r = r*n;
	}
	else {
		x1 = x1*n;
		y1 = y1*n;
		x2 = x2*n;
		y2 = y2*n;
		x3 = x3*n;
		y3 = y3*n;

		x4 = x4*n;
		y4 = y4*n;
		x5 = x5*n;
		y5 = y5*n;
		x6 = x6*n;
		y6 = y6 *n;

		x7 = x7 *n;
		y7 = y7*n;
		x8 = x8*n;
		y8 = y8 *n;
		x9 = x9*n;
		y9 = y9*n;
		x10 = x10*n;
		y10 = y10*n;
		r = r*n;
	}

}
void BDTLV2(int &xc,int &yc,int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, int &x4, int &y4, int &x5, int &y5, int &x6, int &y6, int &x7, int &y7, int &x8, int &y8, int &x9, int &y9, int &x10, int &y10, int &x11, int &y11, float n, int &r) {
		xc = xc*n;
		yc = yc*n;
		r = r*n;
		x1 = x1 *n;
		y1 = y1 *n;
		x2 = x2 * n;
		y2 = y2 * n;
		x3 = x3 * n;
		y3 = y3 * n;

		x4 = x4  * n;
		y4 = y4  * n;
		x5 = x5  * n;
		y5 = y5 *n;
		x6 = x6 * n;
		y6 = y6 * n;

		x7 = x7 * n;
		y7 = y7 * n;
		x8 = x8  * n;
		y8 = y8*n;
		x9 = x9  * n;
		y9 = y9*n;
		x10 = x10  * n;
		y10 = y10*n;
		x11 = x11  * n;
		y11 = y11*n;
}