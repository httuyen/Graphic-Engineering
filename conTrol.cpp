#include "conTrol.h"
#include <iostream>
#include <windows.h>

void select(int &px,int &py) {
	if(ismouseclick(WM_LBUTTONUP)) {
		getmouseclick(WM_LBUTTONUP, px, py);
		clearmouseclickall();
	}
}
//xoa trang thai chuot
void clearmouseclickall() {
	clearmouseclick(WM_LBUTTONDOWN);
	clearmouseclick(WM_LBUTTONUP);
	clearmouseclick(WM_RBUTTONUP);
	clearmouseclick(WM_RBUTTONDOWN);
}
void Input(int &s) {
	//std::cin.ignore();
	
	char a[6] = "";
	char b[10] = "";
	s = 0;
	int temp = 0;
	for (int i = 0; i<4;) {
		if(kbhit()) {
//			char key=getch();
			a[i] = getch();
			if (a[i] == 13) break;
			//a[i] = getch();
			sprintf_s(b, "%d", a[i]-48);
			switch(i) {
				case 0: {
					outtextxy(X21 + 10, Y2 + 40, b);
					break;
				}
				case 1: {
					outtextxy(X21 + 18, Y2 + 40, b);
					break;
				}
				case 2: {
					outtextxy(X21 + 26, Y2 + 40, b);
					break;
				}
			}
			i++;
		}
	}
	std::cout<<strlen(a)<<std::endl;
	temp = strlen(a);
	for (int i = 0; i < temp;i++) {
		a[i] = (int)(a[i] - 48);
	}
	if(temp==4) {
		s=s + a[0] * 100 + a[1] * 10 + a[2];
	}
	else if (temp==3) {
		s = s + a[0] * 10 + a[1];
	}
	else 
	{
		s = s + a[0];
	}
	std::cout << "s=" << s << std::endl;
	
}