#include "vat2.h"
void vevat2() {
	double alpha = -10;
	int xcc = -200;
	int ycc = 100;
	changeTD1(xcc, ycc);
	std::cout << xcc << " " << ycc << std::endl;
	int x, y;
	int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11;
	x1 = xcc + 10; x2 = x1 + 15; x3 = xcc + 10; x4 = x1 + 15; x5 = x4; x6 = x5 + 10; x7 = x5 + 10; x8 = x4; x9 = x6; x10 = x6; x11 = x9 + 40;
	y1 = ycc - 3; y2 = ycc - 3; y3 = ycc + 3; y4 = ycc + 3; y5 = y2 - 10; y6 = y5; y7 = y3 + 10; y8 = y7; y9 = y6 + 5; y10 = y7 - 5; y11 = ycc;
	int a = 10, b = 15, r = 10;
	int newx, newy;
	int dx = 0, dy = 0;
	newx = newy = x = y = 0;
	int s = 0;
	DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
	OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
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
								putpixel(newx, newy, 14);
								TinhDX(xcc, ycc, newx, newy, dx, dy);
								TT2(xcc, ycc, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, dx, dy);
								DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
								OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
								break;
							}
						}
					}
				}
			}
			//quay diem
			if (x >= XleftQ + 40 && x <= XrightQ &&y >= YleftBD + 35 && y <= YrightBD) {
				cleartext();
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
								//std::cin.ignore();
								putpixel(newx, newy, 14);
								outtextxy(X21 + 10, Y2 + 20, "Nhap vao goc quay:");
								Input(s);
								alpha = s;
								cleartext();
								
								Quay(xcc, ycc, newx, newy, alpha);
								Quay(x1, y1, newx, newy, alpha);
								Quay(x2, y2, newx, newy, alpha);
								Quay(x3, y3, newx, newy, alpha);
								Quay(x4, y4, newx, newy, alpha);
								Quay(x5, y5, newx, newy, alpha);
								Quay(x6, y6, newx, newy, alpha);
								Quay(x7, y7, newx, newy, alpha);
								Quay(x8, y8, newx, newy, alpha);
								Quay(x9, y9, newx, newy, alpha);
								Quay(x10, y10, newx, newy, alpha);
								Quay(x11, y11, newx, newy, alpha);
								DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);								newx = 0;
								OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
								break;
							}
						}
					}
				}
				//break;
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
				QuayO(xcc, ycc, newx, newy, alpha);
				QuayO(x1, y1, newx, newy, alpha);
				QuayO(x2, y2, newx, newy, alpha);
				QuayO(x3, y3, newx, newy, alpha);
				QuayO(x4, y4, newx, newy, alpha);
				QuayO(x5, y5, newx, newy, alpha);
				QuayO(x6, y6, newx, newy, alpha);
				QuayO(x7, y7, newx, newy, alpha);
				QuayO(x8, y8, newx, newy, alpha);
				QuayO(x9, y9, newx, newy, alpha);
				QuayO(x10, y10, newx, newy, alpha);
				QuayO(x11, y11, newx, newy, alpha);
				DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				break;
			}
			//doi xung O
			if (x >= XleftDX && x <= XleftDX + 40 && y >= YleftBD + 35 && y <= YrightBD) {
				DXO(xcc, ycc);
				DXO(x1, y1);
				DXO(x2, y2);
				DXO(x3, y3);
				DXO(x4, y4);
				DXO(x5, y5);
				DXO(x6, y6);
				DXO(x7, y7);
				DXO(x8, y8);
				DXO(x9, y9);
				DXO(x10, y10);
				DXO(x11, y11);
				//draw2(xc,yc,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,a,b);
				DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				break;
			}
			//doi xung Ox
			if (x >= XleftDX + 40 && x <= XleftDX + 80 && y >= YleftBD + 35 && y <= YrightBD) {
				DXOx(ycc);
				DXOx(y1);
				DXOx(y2);
				DXOx(y3);
				DXOx(y4);
				DXOx(y5);
				DXOx(y6);
				DXOx(y7);
				DXOx(y8);
				DXOx(y9);
				DXOx(y10);
				DXOx(y11);
				//draw2(xc,yc,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,a,b);
				DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				break;
			}
			//doi xung Oy
			if (x >= XleftDX + 80 && x <= XleftDX + 120 && y >= YleftBD + 35 && y <= YrightBD) {
				DXOy(xcc);
				DXOy(x1);
				DXOy(x2);
				DXOy(x3);
				DXOy(x4);
				DXOy(x5);
				DXOy(x6);
				DXOy(x7);
				DXOy(x8);
				DXOy(x9);
				DXOy(x10);
				DXOy(x11);
				//draw2(xc,yc,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,a,b);
				DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				break;
			}
			//doi xung diem
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
								cleartext();
								putpixel(newx, newy, 14);
								int newxx = newx; int newyy = newy;
								DXPoint(xcc, ycc, newx, newy);
								DXPoint(x1, y1, newx, newy);
								DXPoint(x2, y2, newx, newy);
								DXPoint(x3, y3, newx, newy);
								DXPoint(x4, y4, newx, newy);
								DXPoint(x5, y5, newx, newy);
								DXPoint(x6, y6, newx, newy);
								DXPoint(x7, y7, newx, newy);
								DXPoint(x8, y8, newx, newy);
								DXPoint(x9, y9, newx, newy);
								DXPoint(x10, y10, newx, newy);
								DXPoint(x11, y11, newx, newy);
								DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
								OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
								break;
							}
						}
					}
				}
				break;
			}
			//doi xung dth bat ky
			//ti le 0.5
			if (x >= XleftTL && x <= XleftTL + 35 && y >= YleftBD + 35 && y <= YrightBD) {
				cleardevice();
				menu2D();
				BDTLV2(xcc, ycc, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, 0.5, r);
				TinhDX(xcc, ycc, 583, 240, dx, dy);
				TT2(xcc, ycc, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, dx, dy);
				DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				break;
			}
			//ti le x2
			if (x >= XleftTL + 35 && x <= XleftTL + 70 && y >= YleftBD + 35 && y <= YrightBD) {
				cleardevice();
				menu2D();
				BDTLV2(xcc, ycc, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, 2, r);
				TinhDX(xcc, ycc, 583, 240, dx, dy);
				TT2(xcc, ycc, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, dx, dy);
				CircleMidpoint(xcc, ycc, r, RED);
				DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				break;
			}
			//ti le x3
			if (x >= XleftTL + 70 && x <= XleftTL + 105 && y >= YleftBD + 35 && y <= YrightBD) {
				cleardevice();
				menu2D();
				BDTLV2(xcc, ycc, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, 3, r);
				TinhDX(xcc, ycc, 583, 240, dx, dy);
				TT2(xcc, ycc, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, dx, dy);
				DisplayV2(r, xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				OutTDV2(xcc, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, ycc, y1, y2, y3, y4, y5, y6, y7, y8, y9, y10, y11);
				break;
			}
			//chuyen dong
			if (x >= XleftReturn  && x <= XrightReturn  &&y >= YleftColor  &&y <= YrightColor) {
				CircleMidpoint(xcc, ycc, r, BLACK);
				MidPointLine(x1, y1, x2, y2, BLACK);
				MidPointLine(x3, y3, x4, y4, BLACK);
				MidPointLine(x5, y5, x6, y6, BLACK);
				MidPointLine(x6, y6, x7, y7, BLACK);
				MidPointLine(x7, y7, x8, y8, BLACK);
				MidPointLine(x8, y8, x5, y5, BLACK);
				MidPointLine(x9, y9, x11, y11, BLACK);
				MidPointLine(x10, y10, x11, y11, BLACK);

				for (int i = 10; newx < screenWidth - 125; i = i + 10) {
					alpha = -i;
					//xoa
					int xccc = xcc, yccc = ycc, x1x = x1, y1x = y1, x22 = x2, y22 = y2, x33 = x3, y33 = y3, x44 = x4, y44 = y4, x55 = x5, y55 = y5, x66 = x6, y66 = y6, x77 = x7, y77 = y7, x88 = x8, y88 = y8, x99 = x9, y99 = y9, x100 = x10, y100 = y10, x111 = x11, y111 = y11;
					trucXY();
					newx = 583 + i; newy = 440;
					TinhDX(xccc, yccc, newx, newy, dx, dy);
					TT2(xccc, yccc, x1x, y1x, x22, y22, x33, y33, x44, y44, x55, y55, x66, y66, x77, y77, x88, y88, x99, y99, x100, y100, x111, y111, dx, dy);
					newx = 583 + i + 35;
					Quay(xccc, yccc, newx, newy, alpha);
					Quay(x1x, y1x, newx, newy, alpha);
					Quay(x22, y22, newx, newy, alpha);
					Quay(x33, y33, newx, newy, alpha);
					Quay(x44, y44, newx, newy, alpha);
					Quay(x55, y55, newx, newy, alpha);
					Quay(x66, y66, newx, newy, alpha);
					Quay(x77, y77, newx, newy, alpha);
					Quay(x88, y88, newx, newy, alpha);
					Quay(x99, y99, newx, newy, alpha);
					Quay(x100, y100, newx, newy, alpha);
					Quay(x111, y111, newx, newy, alpha);
					newx = 583 + i - 35;
					//ve
					DisplayV2(r, xccc, x1x, x22, x33, x44, x55, x66, x77, x88, x99, x100, x111, yccc, y1x, y22, y33, y44, y55, y66, y77, y88, y99, y100, y111);
					delay(50);
					if (newx < screenWidth - 125) {
						CircleMidpoint(xccc, yccc, r, BLACK);
						MidPointLine(x1x, y1x, x22, y22, BLACK);
						MidPointLine(x33, y33, x44, y44, BLACK);
						MidPointLine(x55, y55, x66, y66, BLACK);
						MidPointLine(x66, y66, x77, y77, BLACK);
						MidPointLine(x77, y77, x88, y88, BLACK);
						MidPointLine(x88, y88, x55, y55, BLACK);
						MidPointLine(x99, y99, x111, y111, BLACK);
						MidPointLine(x100, y100, x111, y111, BLACK);
					}
					//in toa do
					OutTDV2(xccc, x1x, x22, x33, x44, x55, x66, x77, x88, x99, x100, x111, yccc, y1x, y22, y33, y44, y55, y66, y77, y88, y99, y100, y111);
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
void TT2(int &xcc, int &ycc, int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, int &x4, int &y4, int &x5, int &y5, int &x6, int &y6, int &x7, int &y7, int &x8, int &y8, int &x9, int &y9, int &x100, int &y100, int &x111, int &y111, int dx, int dy) {
	xcc += dx;
	ycc += dy;
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
	x100 += dx;
	y100 += dy;
	x111 += dx;
	y111 += dy;
}
void OutTDV2(int xcc, int x1, int x2, int x3, int  x4, int  x5, int  x6, int x7, int x8, int x9, int x10, int x11, int ycc, int y1, int y2, int y3, int y4, int y5, int y6, int y7, int y8, int y9, int y10, int y11) {
	cleartext();
	//setcolor(7);
	int toado[24] = { xcc, x1,x2,x3,x4,x5, x6,x7,x8,x9,x10,x11,ycc,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11 };
	for (int i = 0; i <= 11; i++) {
		char TDA[20] = "";
		int newx1 = toado[i];
		int newy1 = toado[i + 12];
		changeTD(newx1, newy1);
		//cleartext();
		sprintf_s(TDA, "X%d(%d , %d)", i, newx1, newy1);
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
		case 10:
			outtextxy(X21 + 10, Y2 + 40, TDA);
			break;
		case 11:
			outtextxy(X21 + 120, Y2 + 40, TDA);
			break;
		}
	}
}
void DisplayV2(int r, int xcc, int x1, int x2, int x3, int  x4, int  x5, int  x6, int x7, int x8, int x9, int x10, int x11, int ycc, int y1, int y2, int y3, int y4, int y5, int y6, int y7, int y8, int y9, int y10, int y11) {
	//cleartext();
	CircleMidpoint(xcc, ycc, r, RED);
	MidPointLine(x1, y1, x2, y2, 14);
	MidPointLine(x3, y3, x4, y4, 14);
	MidPointLine(x5, y5, x6, y6, 14);
	MidPointLine(x6, y6, x7, y7, 14);
	MidPointLine(x7, y7, x8, y8, 14);
	MidPointLine(x8, y8, x5, y5, 14);
	MidPointLine(x9, y9, x11, y11, RED);
	MidPointLine(x10, y10, x11, y11, RED);
}