#include "circleMidPoint.h"

void put8pixel(int xc, int yc, int x, int y, int color)
{
	putpixel(x + xc, y + yc, color);
	putpixel(-x + xc, y + yc, color);
	putpixel(x + xc, -y + yc, color);
	putpixel(-x + xc, -y + yc, color);
	putpixel(y + xc, x + yc, color);
	putpixel(-y + xc, x + yc, color);
	putpixel(y + xc, -x + yc, color);
	putpixel(-y + xc, -x + yc, color);
}
void CircleMidpoint(int xc, int yc, int r, int color) {
	int x = 0; int y = r;
	int f = 1 - r;
	put8pixel(xc, yc, x, y, color);
	while (x < y)
	{
		if (f < 0) f += (x << 1) + 3;
		else
		{
			y--;
			f += ((x - y) << 1) + 5;
		}
		x++;
		put8pixel(xc, yc, x, y, color);
	}
}
void drawCircleMidpoint()
{
	char TDA[15] = ""; char TDB[15] = "";
	int x1, y1, x2, y2, x4, y4;
	int newx1, newy1, newx2, newy2, newx, newy;
	x1 = y1 = x2 = y2 = x4 = y4 = 0;

	while (1) {
		if (x1 == 0) {
			//Toa Do Tam
			if (ismouseclick(WM_LBUTTONDOWN)) {
				getmouseclick(WM_LBUTTONDOWN, x1, y1);
				clearmouseclickall();
				if (x1 > screenWidth - 5 || x1<X1 || y1 > Y2 || y1 < 0) {
					outtextxy(X21 + 10, Y2 + 20, "Chon lai Tam");
					x1 = 0;
				}
				else {
					cleartext();
					putpixel(x1, y1, 14);
					newx1 = x1;
					newy1 = y1;
					changeTD(newx1, newy1);
					sprintf_s(TDA, "O(%d , %d)", newx1, newy1);
					outtextxy(x1, y1 + 5, TDA);
					//CircleMidpoint(x1, y1, 400, 14);
				}
			}
		}
		else if (x2 == 0) {
			if (ismouseclick(WM_LBUTTONDOWN)) {
				getmouseclick(WM_LBUTTONDOWN, x2, y2);
				clearmouseclickall();
				if (x2 > screenWidth - 5 || x2<X1 || y2 > Y2 || y2 < 0) {
					outtextxy(X21 + 10, Y2 + 20, "Chon lai R");
				}
				else {
					cleartext();
					putpixel(x2, y2, 14);
					MidPointLine(x1, y1, x2, y2, 14);
					newx2 = x2;
					newy2 = y2;
					changeTD(newx2, newy2);
					int m = sqrt(pow((newx2 - newx1), 2) + pow((newy2 - newy1), 2));
					sprintf_s(TDB, "R=%d", m);
					outtextxy(x2, y2 + 5, TDB);
					CircleMidpoint(x1, y1, m, 14);
				}
			}
		}
		else if (x4 == 0) {
			while (1) {
				if (ismouseclick(WM_LBUTTONDOWN)) {
					getmouseclick(WM_LBUTTONDOWN, x4, y4);
					clearmouseclickall();
					if (x4 >= XleftReturn  && x4 <= XrightReturn  &&y4 >= YleftReturn  &&y4 <= YrightReturn) {
						break;
					}
				}
			}
		}
		else {
			if (ismouseclick(WM_LBUTTONDOWN)) {
				getmouseclick(WM_LBUTTONDOWN, x4, y4);
				clearmouseclickall();
				break;
			}
		}
	}
}