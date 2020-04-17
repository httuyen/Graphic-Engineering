#include "HinhHop.h"
void DrawHHCN(int d,int r,int c) {
	int newx=0, newy=0;
	trucXYZ();
		
		TD toado[8] = { {0,0,0 },{d,0,0 },{2 * d / 3,-r / 2,-r},{-d/3-20,-r / 2,-r},{0,c,0},{d,c,0},{2 * d / 3,-r / 2 + c,-r},{-d/3-20,-r/2+c,-r} };
		for (int i = 0; i < 8; i++) {
			changeTD1(toado[i].x, toado[i].y);
		}
		MidPointLine(toado[0].x, toado[0].y, toado[1].x, toado[1].y, 14);//AB
		MidPointLine(toado[1].x, toado[1].y, toado[2].x, toado[2].y, 14);//BC
		MidPointLine(toado[2].x, toado[2].y, toado[3].x, toado[3].y, 14);//CD
		MidPointLine(toado[3].x, toado[3].y, toado[0].x, toado[0].y, 14);//DA
		MidPointLine(toado[4].x, toado[4].y, toado[5].x, toado[5].y, 14);//EF
		MidPointLine(toado[5].x, toado[5].y, toado[6].x, toado[6].y, 14);//FG
		MidPointLine(toado[6].x, toado[6].y, toado[7].x, toado[7].y, 14);//GH
		MidPointLine(toado[7].x, toado[7].y, toado[4].x, toado[4].y, 14);//HE
		MidPointLine(toado[0].x, toado[0].y, toado[4].x, toado[4].y, 14);//AE
		MidPointLine(toado[1].x, toado[1].y, toado[5].x, toado[5].y, 14);//BF
		MidPointLine(toado[2].x, toado[2].y, toado[6].x, toado[6].y, 14);//CG
		MidPointLine(toado[3].x, toado[3].y, toado[7].x, toado[7].y, 14);//DH
		setlinestyle(1, 0, 2);
		setcolor(BLACK);
		line(toado[0].x, toado[0].y, toado[1].x, toado[1].y);
		line(toado[3].x, toado[3].y, toado[0].x, toado[0].y);
		line(toado[0].x, toado[0].y, toado[4].x, toado[4].y);
		for (int i = 0; i < 8; i++) {
			changeTD(toado[i].x, toado[i].y);
		}
		setcolor(WHITE);
		OutTDHH(toado,d,r,c);
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
void OutTDHH(TD toado[],int d,int r,int c) {	
	for (int i = 0; i < 8; i++) {
		char TDA[20] = "";
		char R[30] = "";
		int newx1 = toado[i].x;
		int newy1 = toado[i].y;
		int newz1 = toado[i].z;
		sprintf_s(TDA, "X%d(%d , %d, %d)", i+1, newx1, newy1,newz1);
		sprintf_s(R, "D=%d   R=%d   H=%d", d, r, c);
		outtextxy(X21 + 10, Y2 + 40, R);
		switch (i)
		{
		case 0:
			outtextxy(X21 + 10, Y2 + 20, TDA);
			break;
		case 1:
			outtextxy(X21 + 100, Y2 + 20, TDA);
			break;
		case 2:
			outtextxy(X21 + 210, Y2 + 20, TDA);
			break;
		case 3:
			outtextxy(X21 + 350, Y2 + 20, TDA);
			break;
		case 4:
			outtextxy(X21 + 480, Y2 + 20, TDA);
			break;
		case 5:
			outtextxy(X21 + 580, Y2 + 20, TDA);
			break;
		case 6:
			outtextxy(X21 + 700, Y2 + 20, TDA);
			break;
		case 7:
			outtextxy(X21 + 830, Y2 + 20, TDA);
			break;
		}
	}
}