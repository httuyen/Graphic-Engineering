#include "background.h"
#include <iostream>
//#define X1 200 colum
//#define X21 200 RowA
//#define X22 1360 RowB
//#define Y2  680  RowAB
//#define XleftReturn		60
//#define YleftReturn		30
//#define XrightReturn		140
//#define YrightReturn		70
//#define XleftButton1		10
//#define XrightButton1		90
//#define YleftButton1		100
//#define YrightButton1		140
//#define XleftButton2		110
//#define XrightButton2		190
//#define YleftButton3		170
//#define YrightButton3		210
//#define XleftTT			200	
//#define XrightTT		280
//#define XleftQ			280
//#define XrightQ			360
//#define XleftTL			360
//#define XrightTL		440
//#define XleftDX			440
//#define XrightDX		520
//#define YleftBD			0
//#define YrightBD		40

//Range x1 > screenWidth - 5 || x1<X1 || y1 > Y2 || y1 < 0

//static DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
//static DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);
void trucXY() {
	char one[3] = "";
	setlinestyle(0, 0, 1);
	setcolor(8);
		//truc X
	outtextxy(screenWidth-20,Y2/2-20,"X");
	line(X1, Y2 / 2, screenWidth, Y2 / 2);
	outtextxy(screenWidth / 2 - 400, Y2 / 2 - 9, "|");
	outtextxy(screenWidth / 2 - 300, Y2 / 2 - 9, "|");
	outtextxy(screenWidth / 2 - 200, Y2 / 2 - 9, "|");
	outtextxy(screenWidth / 2 - 100, Y2 / 2 - 9, "|");
	outtextxy(screenWidth / 2, Y2 / 2 - 9, "|");
	outtextxy(screenWidth / 2 + 200, Y2 / 2 - 9, "|");
	outtextxy(screenWidth / 2 + 300, Y2 / 2 - 9, "|");
	outtextxy(screenWidth / 2 + 400, Y2 / 2 - 9, "|");
	outtextxy(screenWidth / 2 + 500, Y2 / 2 - 9, "|");
	outtextxy(screenWidth / 2 + 600, Y2 / 2 - 9, "|");

	outtextxy(screenWidth / 2 - 400, Y2 / 2 +7, "-500");
	outtextxy(screenWidth / 2 - 300, Y2 / 2 +7, "-400");
	outtextxy(screenWidth / 2 - 200, Y2 / 2+7, "-300");
	outtextxy(screenWidth / 2 - 100, Y2 / 2 +7, "-200");
	outtextxy(screenWidth / 2, Y2 / 2 + 7, "-100");
	outtextxy(screenWidth / 2 + 200, Y2 / 2 + 7, "100");
	outtextxy(screenWidth / 2 + 300, Y2 / 2 + 7, "200");
	outtextxy(screenWidth / 2 + 400, Y2 / 2 + 7, "300");
	outtextxy(screenWidth / 2 + 500, Y2 / 2 + 7, "400");
	outtextxy(screenWidth / 2 + 600, Y2 / 2 + 7, "500");
	//truc Y
	outtextxy(screenWidth / 2 + 110, 15, "Y");
	outtextxy(screenWidth / 2 + 100 - 8, Y2 / 2 + 100 - 15, "__");
	outtextxy(screenWidth / 2 + 100 - 8, Y2 / 2 + 200 - 15, "__");
	outtextxy(screenWidth / 2 + 100 - 8, Y2 / 2 + 300 - 15, "__");
	outtextxy(screenWidth / 2 + 100 - 8, Y2 / 2 - 100 - 15, "__");
	outtextxy(screenWidth / 2 + 100 - 8, Y2 / 2 - 200 - 15, "__");
	outtextxy(screenWidth / 2 + 100 - 8, Y2 / 2 - 300 - 15, "__");

	outtextxy(screenWidth / 2 + 100 +10, Y2 / 2 + 100, "-100");
	outtextxy(screenWidth / 2 + 100 +10, Y2 / 2 + 200, "-200");
	outtextxy(screenWidth / 2 + 100 +10, Y2 / 2 + 300, "-300");
	outtextxy(screenWidth / 2 + 100 +10, Y2 / 2 - 100, "100");
	outtextxy(screenWidth / 2 + 100 +10, Y2 / 2 - 200, "200");
	outtextxy(screenWidth / 2 + 100 +10, Y2 / 2 - 300, "300");
	line(screenWidth/2 +100, 0, screenWidth/2 +100, Y2);
	// goc O
	outtextxy(screenWidth / 2 + 84,Y2/2+10,"O");
}
void trucXYZ() {
	trucXY();
	line(X21, Y2, screenWidth / 2 + 100, Y2 / 2);
	outtextxy(X21+5, Y2-40, "Z");
}
void menu2D() {
	//initwindow(screenWidth-5, screenHeight-5, "");
	
	trucXY();
	setbkcolor(0);
	setcolor(15);
	setlinestyle(0, 0, 3);
	line(X1, 0, X1, screenHeight);
	line(X21, Y2, X22,Y2);
	line(XleftQ, YleftBD + 35, XrightDX, YleftBD + 35);
	line(XleftQ + 50, YleftBD + 35, XleftQ + 50, YrightBD);
	line(XleftDX + 40, YleftBD + 35, XleftDX + 40, YrightBD);
	line(XleftDX + 80, YleftBD + 35, XleftDX + 80, YrightBD);
	line(XleftDX + 120, YleftBD + 35, XleftDX + 120, YrightBD);
	line(XleftDX + 160, YleftBD + 35, XleftDX + 160, YrightBD);
	line(XleftTL, YleftBD + 35, XrightTL, YrightBD-35);
	line(XleftTL + 35, YleftBD + 35, XleftTL + 35, YrightBD);
	line(XleftTL + 70, YleftBD + 35, XleftTL + 70, YrightBD);
	//exit
	rectangle(XleftReturn, YleftExit, XrightReturn, YrightExit);
	outtextxy(XleftReturn + 20, YleftExit+15, "EXIT");
	//return
	rectangle(XleftReturn, YleftReturn, XrightReturn,YrightReturn);
	outtextxy(XleftReturn + 12, YleftReturn + 12, "CLEAR");
	//button1 duong thang
	rectangle(XleftButton1, YleftButton1, XrightButton1, YrightButton1);
	outtextxy(XleftButton1 + 12, YleftButton1 + 5, "DUONG");
	outtextxy(XleftButton1 + 12, YleftButton1 + 20, "THANG");
	//button2 duong tron
	rectangle(XleftButton2, YleftButton1, XrightButton2, YrightButton1);
	outtextxy(XleftButton2 + 12, YleftButton1 + 5, "DUONG");
	outtextxy(XleftButton2 + 15, YleftButton1 + 20, "TRON");
	//button3 eclip
	rectangle(XleftButton1, YleftButton3,XrightButton1, YrightButton3);
	outtextxy(XleftButton1 + 20, YleftButton3 + 10, "ECLIP");
	//button4 da giac
	rectangle(XleftButton2, YleftButton3, XrightButton2, YrightButton3);
	outtextxy(XleftButton2 + 35, YleftButton3 + 5, "DA");
	outtextxy(XleftButton2 + 30, YleftButton3 + 20, "GIAC");
	//hinh hop
	rectangle(XleftButton1, YleftButton5, XrightButton1, YrightButton5);
	outtextxy(XleftButton1 + 30, YleftButton5 + 5, "HINH");
	outtextxy(XleftButton1 + 30, YleftButton5 + 20, "HOP");
	//hinh tru
	rectangle(XleftButton2, YleftButton5, XrightButton2, YrightButton5);
	outtextxy(XleftButton2 + 30, YleftButton5 + 5, "HINH");
	outtextxy(XleftButton2 + 30, YleftButton5 + 20, "TRU");
	//vat1
	rectangle(XleftButton1, YleftButton7, XrightButton1, YrightButton7);
	outtextxy(XleftButton1 + 30, YleftButton7 + 5, "VAT 1");
//	outtextxy(XleftButton1 + 30, YleftButton7 + 20, "GIAC");
	//vat2
	rectangle(XleftButton2, YleftButton7, XrightButton2, YrightButton7);
	outtextxy(XleftButton2 + 30, YleftButton7 + 5, "VAT 2");
//	outtextxy(XleftButton2 + 30, YleftButton7 + 20, "GIAC");
	//bang mau
	rectangle(XleftReturn, YleftColor, XrightReturn, YrightColor);
	outtextxy(XleftReturn + 12, YleftColor + 5, "CHUYEN");
	outtextxy(XleftReturn + 15, YleftColor + 20, "DONG");

	//tinh tien
	rectangle(XleftTT,YleftBD,XrightTT,YrightBD);
	outtextxy(XleftTT+5,YleftBD+10,"TINH TIEN");
	//quay
	rectangle(XleftQ, YleftBD, XrightQ, YrightBD);
	outtextxy(XleftQ + 30, YleftBD + 10, "QUAY");
	outtextxy(XleftQ + 20, YleftBD + 40, "O");
	outtextxy(XleftQ + 55, YleftBD + 40, "DIEM");
	//doi xung
	rectangle(XleftDX,YleftBD,XrightDX,YrightBD);
	outtextxy(XleftDX+70,YleftBD+10,"DOI XUNG");
	//doi xung O
	rectangle(XleftDX,YleftBD,XrightDX,YrightBD);
	outtextxy(XleftDX+15,YleftBD+40,"O");
	//doi xung Ox
	rectangle(XleftDX, YleftBD, XrightDX, YrightBD);
	outtextxy(XleftDX + 45, YleftBD + 40, "OX");
	//doi xung 0y
	rectangle(XleftDX, YleftBD, XrightDX, YrightBD);
	outtextxy(XleftDX + 85, YleftBD + 40, "OY");
	//doi xung diem
	rectangle(XleftDX, YleftBD, XrightDX, YrightBD);
	outtextxy(XleftDX + 122, YleftBD + 40, "DIEM");
	//doi xung doan thang
	rectangle(XleftDX, YleftBD, XrightDX, YrightBD);
	outtextxy(XleftDX + 165, YleftBD + 40, "DT");
	//Ti le
	rectangle(XleftTL, YleftBD, XrightTL, YrightBD);
	outtextxy(XleftTL+35 , YleftBD + 10, "TY LE");
	outtextxy(XleftTL +10, YleftBD + 45, "0.5");
	outtextxy(XleftTL +45, YleftBD + 45, "2");
	outtextxy(XleftTL +75, YleftBD + 45, "3");
}
void cleartext() {
	outtextxy(X21 + 10, Y2 + 20, "                                                                                                                                                                                                                                                                                                                  ");
	outtextxy(X21 + 10, Y2 + 40, "                                                                                                                                                                                                                                                                                                                     ");
} 
void changeTD(int &x, int &y) {
	//trai tren
	if (x<screenWidth / 2 + 100 && x >X1 && y > 0 && y < Y2 / 2) {
		x = (x - (screenWidth / 2 + 100));
		y = ((Y2 / 2) - y);
	}
	//trai duoi
	else if (x<screenWidth / 2 + 100 && x >X1 && y < Y2 && y > Y2 / 2) {
		x = (x - (screenWidth / 2 + 100));
		y = ((Y2 / 2)-y);
	}
	//phai tren
	else if (x<screenWidth && x >screenWidth / 2 + 100 && y > 0 && y < Y2 / 2) {
		x = (x - (screenWidth / 2 + 100));
		y = ((Y2 / 2)-y);
	}
	//phai duoi
	else 
//		(x<screenWidth && x >screenWidth / 2 + 100 && y < Y2 && y > Y2 / 2)
	{
		x = (x - (screenWidth / 2 + 100));
		y = ((Y2 / 2) - y);
	}
}
void changeTD1(int &x,int &y) {
	x = (x + (screenWidth / 2 + 100));
	y = ((Y2 / 2) - y);
}