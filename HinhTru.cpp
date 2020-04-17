#include "HinhTru.h"
void drawHT(int r,int h) {
	Td toado[6] = { {100,0,0},{ 100,h,0},{ 100 - r,0,0},{ 100 - r,h,0},{ 100 + r,0,0 } ,{100 + r,h,0 } };
	int a = r, b = r / 2;
	int newx = 0, newy = 0;
	trucXYZ();
	for(int i=0;i<6;i++) {
		changeTD1(toado[i].x, toado[i].y);
	}
	putpixel(toado[0].x, toado[0].y, 14);
	putpixel(toado[1].x, toado[1].y, 14);
	ElipMidPoint(toado[0].x, toado[0].y, a, b, 14);
	ElipMidPoint(toado[1].x, toado[1].y, a, b, 14);
	MidPointLine(toado[2].x, toado[2].y, toado[3].x, toado[3].y, 14);
	MidPointLine(toado[4].x, toado[4].y, toado[5].x, toado[5].y, 14);
	OutTDHT(toado,r,h);
	if (kbhit) {
		char key = getch();
		if (key) {
			std::cout << "oke" << std::endl;
			//x4 = 0;
			cleardevice();
			cleartext();
		}
	}
}
void OutTDHT(Td toado[],int r,int h) {
	for (int i = 0; i < 6; i++) {
		char TDA[20] = "";
		char R[20] = "";
		int newx1 = toado[i].x;
		int newy1 = toado[i].y;
		int newz1 = toado[i].z;
		changeTD(newx1, newy1);
		sprintf_s(TDA, "X%d(%d , %d, %d)", i + 1, newx1, newy1,newz1);
		sprintf_s(R, "R= %d   H= %d", r,h);
		switch (i)
		{
		case 0:
			outtextxy(X21 + 10, Y2 + 20, TDA);
			break;
		case 1:
			outtextxy(X21 + 110, Y2 + 20, TDA);
			break;
		case 2:
			outtextxy(X21 + 220, Y2 + 20, TDA);
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
		}
		outtextxy(X21 + 10, Y2 + 40, R);
	}
}