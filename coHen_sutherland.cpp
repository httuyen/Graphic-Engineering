#include "coHen_sutherland.h"
void macode(int x, int y, code b)
{
	
	for (int i = 1; i <= 4; i++)
		b[i] = 0;
	if (x < xmin) b[1] = 1;
	if (x > xmax) b[2] = 1;
	if (y < ymin) b[3] = 1;
	if (y > ymax) b[4] = 1;
}
//XAY DUNG HAM XEN THEO THUAT TOAN COHEN SUTHERLAND OUTCODE
int xen(int x1, int y1, int x2, int y2)
{
	code c1, c2;
	int  chon, tong1, tong2, mu2;
	int tgx, tgy;
	do
	{
		macode(x1, y1, c1); macode(x2, y2, c2);
		tong1 = 0; tong2 = 0; mu2 = 1;
		for (int i = 1; i <= 4; i++)
		{
			tong1 = tong1 + mu2*c1[i];
			tong2 = tong2 + mu2*c2[i];
			mu2 = mu2 * 2;
		}
		//kiem tra xem xay ra truong hop nao
		if (tong1 + tong2 == 0)//truong hop dt nam trong HCN
		{
			chon = 1;
			setlinestyle(0, 0, 0);
			line(x1, y1, x2, y2);
		}
		if ((tong1 & tong2) != 0)//doan thang can xen nam ve mot phia cua canh HCN xen
			chon = 2;
		if (((tong1 + tong2) != 0) && ((tong1 & tong2) == 0))
		{
			chon = 3;
			if (tong1 == 0)//thay doi vai tro cua diem 1 cho diem 2
			{
				tgx = x1; x1 = x2; x2 = tgx;
				tgy = y1; y1 = y2; y2 = tgy;
			}
			macode(x1, y1, b);
			if (b[1] == 1)
			{
				y1 = y1 + (xmin - x1)*(y2 - y1) / (x2 - x1);
				x1 = xmin;
			}
			if (b[2] == 1)
			{
				y1 = y1 + (xmax - x1)*(y2 - y1) / (x2 - x1);
				x1 = xmax;
			}
			if (b[3] == 1)
			{
				x1 = x1 + (ymin - y1)*(x2 - x1) / (y2 - y1);
				y1 = ymin;
			}
			if (b[4] == 1)
			{
				x1 = x1 + (ymax - y1)*(x2 - x1) / (y2 - y1);
				y1 = ymax;
			}
		}
	} while ((chon != 1) && (chon != 2));
	return 0;

}
void xenhinh() {
	setcolor(RED);
	setlinestyle(0, 0, 3);
	rectangle(xmin, ymin, xmax, ymax);
	a1 = b1 = a2 = b2 = 0;
	while (1) {
		Sleep(20);
		if (a1==0) {
			if (ismouseclick(WM_LBUTTONDOWN)) {
				getmouseclick(WM_LBUTTONDOWN, a1, b1);
				clearmouseclick(WM_LBUTTONDOWN);
				cout << "left: " << a1 << " " << b1 << endl;
			}
		}else if (ismouseclick(WM_LBUTTONDOWN)) {
			getmouseclick(WM_LBUTTONDOWN, a2, b2);
			clearmouseclick(WM_LBUTTONDOWN);
			cout << "right: " << a2 << " " << b2 << endl;
		}
		if (kbhit()) {
			//setbkcolor(BLACK);
			if (a2 == 0) {
				outtextxy(X21 + 10, Y2 + 20, "Chua du thong tin dau vao");
				outtextxy(X21 + 10, Y2 + 40, "Chua du thong tin dau vao");
			}
			else {
				cleartext();
				setcolor(WHITE);
				setlinestyle(1, 0, 0);
				line(a1, b1, a2, b2);
				/*setlinestyle(0, 0, 0);
				xen(a1, b1, a2, b2);*/
				//px = 0, py = 0;
				getch();
				break;
			}
		}
	}
}