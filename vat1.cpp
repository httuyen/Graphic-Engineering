#include "vat1.h"
void vevat1() {
	float alpha = -10;
	int s = 0;
	Dinh d[3] = { { xc + 16,yc - 27 },{ xc + 28,yc + 5 },{ xc + 60,yc - 24 } };
	Dinh a[3] = { { xc - 29,yc - 1 },{ xc - 8,yc - 29 },{ xc - 51,yc - 35 } };
	Dinh b[3] = { { xc - 16,yc + 25 },{ xc + 17,yc + 25 },{ xc + 2,yc + 64 } };
	int x, y;
	int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10;
	x1 = xc + 16; x2 = xc + 28; x3 = xc + 60; x4 = xc - 29; x5 = xc - 8; x6 = xc - 51; x7 = xc - 16; x8 = xc + 17; x9 = xc + 2; x10 = xc;
	y1 = yc - 27; y2 = yc + 5; y3 = yc - 24; y4 = yc - 1; y5 = yc - 29; y6 = yc - 35; y7 = yc + 25; y8 = yc + 25; y9 = yc + 64; y10 = yc;

	int newx, newy;
	int dx, dy, newx1, newx2, newy1, newy2;
	newx = newy = x = y = 0;
	char TDA[20] = "";
	char TDB[20] = "";

	drawMultiple(d, 3, 5);
	drawMultiple(a, 3, 6);
	drawMultiple(b, 3, RED);
	MidPointLine(x1, y1, x2, y2, BLACK);
	MidPointLine(x4, y4, x5, y5, BLACK);
	MidPointLine(x7, y7, x8, y8, BLACK);
	CircleMidpoint(633, 240, 30, 10);
	OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
	while (1) {
		if (ismouseclick(WM_LBUTTONDOWN)) {
			getmouseclick(WM_LBUTTONDOWN, x, y);
			clearmouseclickall;
			//tinh tien den 1 diem
			if (x >= XleftTT && x <= XrightTT &&y >= YleftBD &&y <= YrightBD) {
				while (1) {
					if (newx == 0) {
						if (ismouseclick(WM_LBUTTONDOWN)) {
							getmouseclick(WM_LBUTTONDOWN, newx, newy);
							clearmouseclickall();
							if (newx > screenWidth - 5 || newx<X1 || newy > Y2 || newy < 0) {
								outtextxy(X21 + 10, Y2 + 20, "Chon lai vi tri can tinh tien");
								newx = 0;
							}
							else {
								cleartext();
								dx = newx - 633;
								dy = newy - 240;
								break;
							}
						}
					}
				}
				TT(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, dx, dy);
				Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
				Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
				Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
				draw(x1, y1, x2, y2, x4, y4, x5, y5, x7, y7, x8, y8, x10, y10, 30, d, a, b);
				OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
			}
			//quay diem
			if (x >= XleftQ + 40 && x <= XrightQ &&y >= YleftBD + 35 && y <= YrightBD) {
				while (1) {
					if (newx == 0) {
						if (ismouseclick(WM_LBUTTONDOWN)) {
							getmouseclick(WM_LBUTTONDOWN, newx, newy);
							clearmouseclickall();
							if (newx > screenWidth - 5 || newx<X1 || newy > Y2 || newy < 0) {
								outtextxy(X21 + 10, Y2 + 20, "Chon lai vi tri tam quay");
								newx = 0;
							}
							else {
								cleartext();
								//								TinhDX(x10, y10, screenWidth / 2 + 100, Y2 / 2,dx,dy);
								putpixel(newx, newy, 14);
								outtextxy(X21 + 10, Y2 + 20, "Nhap vao goc quay:");
								Input(s);
								alpha = s;
								cleartext();
								Quay(x10, y10, newx, newy, alpha);
								Quay(x1, y1, newx, newy, alpha);
								Quay(x2, y2, newx, newy, alpha);
								Quay(x3, y3, newx, newy, alpha);
								Quay(x4, y4, newx, newy, alpha);
								Quay(x5, y5, newx, newy, alpha);
								Quay(x6, y6, newx, newy, alpha);
								Quay(x7, y7, newx, newy, alpha);
								Quay(x8, y8, newx, newy, alpha);
								Quay(x9, y9, newx, newy, alpha);
								Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
								Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
								Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
								draw(x1, y1, x2, y2, x4, y4, x5, y5, x7, y7, x8, y8, x10, y10, 30, d, a, b);
								newx = 0;
								OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
								break;
							}
						}
					}
				}
			}
			//quay O
			if (x >= XleftQ && x <= XrightQ - 40 && y >= YleftBD + 35 && y <= YrightBD) {
				cleartext();
				outtextxy(X21 + 10, Y2 + 20, "Nhap vao goc quay:");
				Input(s);
				alpha = s;
				cleartext();
				newx = screenWidth / 2 + 100;
				newy = Y2 / 2;
				QuayO(x10, y10, newx, newy, alpha);
				QuayO(x1, y1, newx, newy, alpha);
				QuayO(x2, y2, newx, newy, alpha);
				QuayO(x3, y3, newx, newy, alpha);
				QuayO(x4, y4, newx, newy, alpha);
				QuayO(x5, y5, newx, newy, alpha);
				QuayO(x6, y6, newx, newy, alpha);
				QuayO(x7, y7, newx, newy, alpha);
				QuayO(x8, y8, newx, newy, alpha);
				QuayO(x9, y9, newx, newy, alpha);
				Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
				Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
				Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
				draw(x1, y1, x2, y2, x4, y4, x5, y5, x7, y7, x8, y8, x10, y10, 30, d, a, b);
				OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
				//break;
			}
			//doi xung 0
			if (x >= XleftDX && x <= XleftDX + 40 && y >= YleftBD + 35 && y <= YrightBD) {
				DXO(x10, y10);
				DXO(x1, y1);
				DXO(x2, y2);
				DXO(x3, y3);
				DXO(x4, y4);
				DXO(x5, y5);
				DXO(x6, y6);
				DXO(x7, y7);
				DXO(x8, y8);
				DXO(x9, y9);
				Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
				Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
				Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
				draw(x1, y1, x2, y2, x4, y4, x5, y5, x7, y7, x8, y8, x10, y10, 30, d, a, b);
				OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
				//break;
			}
			//doi xung Ox
			if (x >= XleftDX + 40 && x <= XleftDX + 80 && y >= YleftBD + 35 && y <= YrightBD) {
				DXOx(y10);
				DXOx(y1);
				DXOx(y2);
				DXOx(y3);
				DXOx(y4);
				DXOx(y5);
				DXOx(y6);
				DXOx(y7);
				DXOx(y8);
				DXOx(y9);
				Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
				Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
				Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
				draw(x1, y1, x2, y2, x4, y4, x5, y5, x7, y7, x8, y8, x10, y10, 30, d, a, b);
				OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
				//break;
			}
			//doi xung Oy
			if (x >= XleftDX + 80 && x <= XleftDX + 120 && y >= YleftBD + 35 && y <= YrightBD) {
				DXOy(x10);
				DXOy(x1);
				DXOy(x2);
				DXOy(x3);
				DXOy(x4);
				DXOy(x5);
				DXOy(x6);
				DXOy(x7);
				DXOy(x8);
				DXOy(x9);
				Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
				Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
				Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
				draw(x1, y1, x2, y2, x4, y4, x5, y5, x7, y7, x8, y8, x10, y10, 30, d, a, b);
				OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
				//break;
			}
			//doi xung qua diem
			if (x >= XleftDX + 120 && x <= XleftDX + 160 && y >= YleftBD + 35 && y <= YrightBD) {
				while (1) {
					if (newx == 0) {
						if (ismouseclick(WM_LBUTTONDOWN)) {
							getmouseclick(WM_LBUTTONDOWN, newx, newy);
							clearmouseclickall();
							if (newx > screenWidth - 5 || newx<X1 || newy > Y2 || newy < 0) {
								outtextxy(X21 + 10, Y2 + 20, "Chon lai diem doi xung");
								newx = 0;
							}
							else {
								putpixel(newx, newy, 14);
								int newxx = newx; int newyy = newy;
								DXPoint(x10, y10, newx, newy);
								DXPoint(x1, y1, newx, newy);
								DXPoint(x2, y2, newx, newy);
								DXPoint(x3, y3, newx, newy);
								DXPoint(x4, y4, newx, newy);
								DXPoint(x5, y5, newx, newy);
								DXPoint(x6, y6, newx, newy);
								DXPoint(x7, y7, newx, newy);
								DXPoint(x8, y8, newx, newy);
								DXPoint(x9, y9, newx, newy);
								Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
								Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
								Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
								draw(x1, y1, x2, y2, x4, y4, x5, y5, x7, y7, x8, y8, x10, y10, 30, d, a, b);
								OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
								break;
							}
						}
					}
				}
				//break;
			}
			//doi xung qua duog thang bat ki
			//ti le 0.5
			if (x >= XleftTL && x <= XleftTL + 35 && y >= YleftBD + 35 && y <= YrightBD) {
				cleardevice();
				menu2D();
				int r = 30;
				BDTLV1(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, 0.5, r);
				TinhDX(x10, y10, 583, 240, dx, dy);
				TT(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, dx, dy);
				Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
				Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
				Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
				draw(x1, y1, x2, y2, x4, y4, x5, y5, x7, y7, x8, y8, x10, y10, r, d, a, b);
				OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
				//break;
			}
			//ti le x2
			if (x >= XleftTL + 35 && x <= XleftTL + 70 && y >= YleftBD + 35 && y <= YrightBD) {
				cleardevice();
				menu2D();
				int r = 30;
				BDTLV1(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, 2, r);
				TinhDX(x10, y10, 583, 240, dx, dy);
				TT(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, dx, dy);
				Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
				Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
				Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
				draw(x1, y1, x2, y2, x4, y4, x5, y5, x7, y7, x8, y8, x10, y10, r, d, a, b);
				OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
				//break;
			}
			//ti le x3
			if (x >= XleftTL + 70 && x <= XleftTL + 105 && y >= YleftBD + 35 && y <= YrightBD) {
				cleardevice();
				menu2D();
				int r = 30;
				BDTLV1(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, 3, r);
				TinhDX(x10, y10, 583, 240, dx, dy);
				TT(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, dx, dy);
				Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
				Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
				Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
				draw(x1, y1, x2, y2, x4, y4, x5, y5, x7, y7, x8, y8, x10, y10, r, d, a, b);
				OutTDV1(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10);
				//break;
			}
			//chuyen dong
			if (x >= XleftReturn  && x <= XrightReturn  &&y >= YleftColor  &&y <= YrightColor) {
				Dinh d[3] = { { x1,y1 },{ x2,y2 },{ x3,y3 } };
				Dinh a[3] = { { x4,y4 },{ x5,y5 },{ x6,y6 } };
				Dinh b[3] = { { x7,y7 },{ x8,y8 },{ x9,y9 } };
				int r = 30;
				drawMultiple(d, 3, BLACK);
				drawMultiple(a, 3, BLACK);
				drawMultiple(b, 3, BLACK);
				MidPointLine(x1, y1, x2, y2, BLACK);
				MidPointLine(x4, y4, x5, y5, BLACK);
				MidPointLine(x7, y7, x8, y8, BLACK);
				CircleMidpoint(x10, y10, 30, BLACK);
				for (int i = 10; newx < screenWidth - 55; i = i + 10) {
					alpha = -i;
					//xoa
					int x1x = x1, y1x = y1, x22 = x2, y22 = y2, x33 = x3, y33 = y3, x44 = x4, y44 = y4, x55 = x5, y55 = y5, x66 = x6, y66 = y6, x77 = x7, y77 = y7, x88 = x8, y88 = y8, x99 = x9, y99 = y9, x100 = x10, y100 = y10;
					trucXY();
					newx = 633 + i; newy = 440;
					TinhDX(x100, y100, newx, newy, dx, dy);
					TT(x1x, y1x, x22, y22, x33, y33, x44, y44, x55, y55, x66, y66, x77, y77, x88, y88, x99, y99, x100, y100, dx, dy);
					//newx = 633 + i;
					Quay(x100, y100, newx, newy, alpha);
					Quay(x1x, y1x, newx, newy, alpha);
					Quay(x22, y22, newx, newy, alpha);
					Quay(x33, y33, newx, newy, alpha);
					Quay(x44, y44, newx, newy, alpha);
					Quay(x55, y55, newx, newy, alpha);
					Quay(x66, y66, newx, newy, alpha);
					Quay(x77, y77, newx, newy, alpha);
					Quay(x88, y88, newx, newy, alpha);
					Quay(x99, y99, newx, newy, alpha);
					//newx = 633 + i - 35;
					//ve
					Dinh d[3] = { { x1x,y1x },{ x22,y22 },{ x33,y33 } };
					Dinh a[3] = { { x44,y44 },{ x55,y55 },{ x66,y66 } };
					Dinh b[3] = { { x77,y77 },{ x88,y88 },{ x99,y99 } };
					draw(x1x, y1x, x22, y22, x44, y44, x55, y55, x77, y77, x88, y88, x100, y100, r, d, a, b);
					delay(50);
					if (newx < screenWidth - 55) {
						drawMultiple(d, 3, BLACK);
						drawMultiple(a, 3, BLACK);
						drawMultiple(b, 3, BLACK);
						MidPointLine(x1, y1, x2, y2, BLACK);
						MidPointLine(x4, y4, x5, y5, BLACK);
						MidPointLine(x7, y7, x8, y8, BLACK);
						CircleMidpoint(x100, y100, r, BLACK);
					}
					//in toa do
					OutTDV1(x1x, x22, x33, x44, x55, x66, x77, x88, x99, x100, y1x, y22, y33, y44, y55, y66, y77, y88, y99, y100);
					
				}
				break;
			}
			//clear
			if (x >= XleftReturn  && x <= XrightReturn  &&y >= YleftReturn  &&y <= YrightReturn) {
				std::cout << "oke" << std::endl;
				//x4 = 0;
				break;
			}
		}
	}
}
void draw(int x1, int y1, int x2, int y2, int x4, int y4, int x5, int y5, int x7, int y7, int x8, int y8, int x10, int y10, int r, Dinh d[], Dinh a[], Dinh b[]) {
	drawMultiple(d, 3, 5);
	drawMultiple(a, 3, 6);
	drawMultiple(b, 3, RED);
	MidPointLine(x1, y1, x2, y2, BLACK);
	MidPointLine(x4, y4, x5, y5, BLACK);
	MidPointLine(x7, y7, x8, y8, BLACK);
	CircleMidpoint(x10, y10, r, 10);
}
void TT(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, int &x4, int &y4, int &x5, int &y5, int &x6, int &y6, int &x7, int &y7, int &x8, int &y8, int &x9, int &y9, int &x10, int &y10, int dx, int dy) {
	x10 += dx;
	y10 += dy;
	x1 += dx;
	y1 += dy;
	x2 += dx;
	y2 += dy;
	x3 += dx;
	y3 += dy;
	x4 += dx;
	y4 += dy;
	x5 += dx;
	y5 += dy;
	x6 += dx;
	y6 += dy;
	x7 += dx;
	y7 += dy;
	x8 += dx;
	y8 += dy;
	x9 += dx;
	y9 += dy;
}
void OutTDV1(int x1, int x2, int x3, int  x4, int  x5, int  x6, int x7, int x8, int x9, int x10, int y1, int y2, int y3, int y4, int y5, int y6, int y7, int y8, int y9, int y10) {
	cleartext();
	int toado[20] = { x1,x2,x3,x4,x5, x6,x7,x8,x9,x10,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10 };
	for (int i = 0; i <= 9; i++) {
		char TDA[20] = "";
		int newx1 = toado[i];
		int newy1 = toado[i + 10];
		changeTD(newx1, newy1);
		//cleartext();
		sprintf_s(TDA, "X%d(%d , %d)", i+1, newx1, newy1);
		switch (i)
		{
		case 0:
			outtextxy(X21 + 10, Y2 + 20, TDA);
			break;
		case 1:
			outtextxy(X21 + 110, Y2 + 20, TDA);
			break;
		case 2:
			outtextxy(X21 + 210, Y2 + 20, TDA);
			break;
		case 3:
			outtextxy(X21 + 310, Y2 + 20, TDA);
			break;
		case 4:
			outtextxy(X21 + 410, Y2 + 20, TDA);
			break;
		case 5:
			outtextxy(X21 + 510, Y2 + 20, TDA);
			break;
		case 6:
			outtextxy(X21 + 610, Y2 + 20, TDA);
			break;
		case 7:
			outtextxy(X21 + 710, Y2 + 20, TDA);
			break;
		case 8:
			outtextxy(X21 + 810, Y2 + 20, TDA);
			break;
		case 9:
			outtextxy(X21 + 910, Y2 + 20, TDA);
			break;
		}
	}
}