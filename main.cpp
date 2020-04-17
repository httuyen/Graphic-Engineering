#include "coHen_sutherland.h"
#include "background.h"
#include "conTrol.h"
#include "lineMidPoint.h"
#include "circleMidPoint.h"
#include "eclipMidPoint.h"
#include "drawMultiple.h"
#include "vat1.h"
#include "vat2.h"
#include "HinhHop.h"
#include "HinhTru.h"
#define BTExit		px >= XleftReturn  && px <= XrightReturn  &&py >= YleftExit	   &&py <= YrightExit
#define BTReturn	px >= XleftReturn  && px <= XrightReturn  &&py >= YleftReturn  &&py <= YrightReturn
#define BT1			px >= XleftButton1 && px <= XrightButton1 &&py >= YleftButton1 &&py <= YrightButton1
#define BT2			px >= XleftButton2 && px <= XrightButton2 &&py >= YleftButton1 &&py <= YrightButton1
#define BT3			px >= XleftButton1 && px <= XrightButton1 &&py >= YleftButton3 &&py <= YrightButton3
#define BT4			px >= XleftButton2 && px <= XrightButton2 &&py >= YleftButton3 &&py <= YrightButton3
#define BT5			px >= XleftButton1 && px <= XrightButton1 &&py >= YleftButton5 &&py <= YrightButton5
#define BT6			px >= XleftButton2 && px <= XrightButton2 &&py >= YleftButton5 &&py <= YrightButton5
#define BTV1		px >= XleftButton1 && px <= XrightButton1 &&py >= YleftButton7 &&py <= YrightButton7
#define BTV2		px >= XleftButton2 && px <= XrightButton2 &&py >= YleftButton7 &&py <= YrightButton7
#define BTTT		px >= XleftTT && px <= XrightTT &&py >= YleftBD &&py <= YrightBD

int main()
{
	initwindow(screenWidth - 5, screenHeight - 5, "");
	//int gd = 10, gm;
	//initgraph(&gd, &gm, NULL);
	while (1) {
		menu2D();
		px = py = 0;
		select(px, py);
		Sleep(50);
		cout << "oke" << endl;
		//ve duong thang
		if (BT1) {
			//vevat();
			DrawMidPointLine();
		}
		//ve duong tron
		if (BT2) {
			drawCircleMidpoint();
		}
		//ve eclip
		if (BT3) {
			ElipMidPoint(getmaxx() / 2, getmaxy() / 2, 150, 80, 15);
		}
		//Ve da giac
		if (BT4) {
			//drawMultiple(d,4,14);
		}
		//hinh hop chu nhat
		if(BT5) {
			DrawHHCN(200,100,100);
		}
		//hinh tru
		if (BT6) {
			drawHT(50,100);
		}
		//Vat1
		if (BTV1) {
			vevat1();
		}
		//vat2
		if (BTV2) {
			vevat2();
		}
		//return
		if (BTReturn) {
			px = py = 0;
			cleardevice();
		}
		if (BTExit) {
			exit(1);
		}
		
	}
	closegraph(0);
	return 0;
}