#include "eclipMidPoint.h"

void plot(int xc, int yc, int x, int y, int color)
{
	putpixel(xc + x, yc + y, color);
	putpixel(xc - x, yc + y, color);
	putpixel(xc + x, yc - y, color);
	putpixel(xc - x, yc - y, color);
}
void ElipMidPoint(int xc, int yc, int a, int b, int color)
{
	int x, y, fx, fy, a2, b2, p;
	x = 0;
	y = b;
	a2 = a*a;
	b2 = b*b;
	fx = 0;
	fy = 2 * a2 * y;
	plot(xc, yc, x, y, color);
	p = ROUND(b2 - (a2*b) + (0.25*a2));//p=b2 - a2*b +a2/4
	while (fx < fy)
	{
		x++;
		fx += 2 * b2;
		//delay(50);
		if (p < 0)
		{
			p += b2*(2 * x + 3);//p=p + b2*(2x +3)
		}
		else
		{
			y--;
			p += b2*(2 * x + 3) + a2*(2 - 2 * y);//p=p +b2(2x +3) +a2(2-2y)
			fy -= 2 * a2;
		}
		plot(xc, yc, x, y, color);
	}
	p = ROUND(b2*(x + 0.5)*(x + 0.5) + a2*(y - 1)*(y - 1) - a2*b2);
	//
	while (y > 0)
	{
		y--;
		fy -= 2 * a2;
		//delay(50);
		if (p >= 0)
		{
			p += a2*(3 - 2 * y); //p=p +a2(3-2y)
		}
		else
		{
			x++;
			fx += 2 * b2;
			p += b2*(2 * x + 2) + a2*(3 - 2 * y);//p=p+ b2(2x +2) + a2(3-2y)
		}
		plot(xc, yc, x, y, color);
	}
}