#pragma once
#include "graphics.h"
#define X1 200
#define X21 200 
#define X22 1360 
#define Y2  680
#define YleftExit       700
#define YrightExit      745
#define XleftReturn		60
#define YleftReturn		30
#define XrightReturn	140
#define YrightReturn	70
#define XleftButton1	10
#define XrightButton1	90
#define YleftButton1	100
#define YrightButton1	140
#define XleftButton2	110
#define XrightButton2	190
#define YleftButton3	170
#define YrightButton3	210
#define YleftButton5	240
#define YrightButton5	280
#define YleftButton7	310
#define YrightButton7	350
#define XleftTT			200	
#define XrightTT		300
#define XleftQ			300
#define XrightQ			400
#define XleftDX			400
#define XrightDX		600
#define XleftTL			600
#define XrightTL		705
#define YleftBD			0
#define YrightBD		70
#define YleftColor 370
#define YrightColor 410
#define Round(a) (int)(a+0.5)
#define screenWidth 1366
#define screenHeight 768
//Range x1 > screenWidth - 5 || x1<X1 || y1 > Y2 || y1 < 0
//static DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
//static DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);
void trucXY();
void trucXYZ();
void menu2D();
void cleartext();
void changeTD(int &x,int &y);
void changeTD1(int &x, int &y);