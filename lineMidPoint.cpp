#include "lineMidPoint.h"

void MidPointLine(int x1, int y1, int x2, int y2,int color)
{
	int Dx = x2 - x1, Dy = y2 - y1;
	int x = x1, y = y1;
	int dx = (Dx < 0) ? -1 : 1; 
	Dx = abs(Dx);
	int dy = (Dy < 0) ? -1 : 1;
	Dy = abs(Dy);


	if (Dx > Dy) {
		int p = (Dy << 1) - Dx;
		int const1 = Dy << 1, const2 = (Dy - Dx) << 1;
		putpixel(x, y, color);
		while (x != x2) {
			if (p < 0) {
				p += const1;
			}
			else {
				p += const2;
				y += dy;
			}
			x += dx;
			putpixel(x, y, color);
		}
	}
	else {
		int p = (Dx << 1) - Dy;
		int const1 = Dx << 1, const2 = (Dx - Dy) << 1;
		putpixel(x, y, color);
		while (y != y2) {
			if (p < 0) {
				p += const1;
			}
			else {
				p += const2;
				x += dx;
			}
			y += dy;
			putpixel(x, y, color);
		}
	}
}
void DrawMidPointLine() {
	int s = 0;
	Input(s);
	//std::cin.ignore();
	int x4, y4, x1, y1, x2, y2;
	int dx = 0;
	int dy = 0;
	char TDA[100] = "", TDB[100] = "";
	int newx1, newy1, newx2, newy2,newx=0,newy=0,newxx,newyy;
	x1 = y1 = x2 = y2 = x4 = y4 = 0;
	while (1) {
		if (x1 == 0) {
			//Toa Do A
			if (ismouseclick(WM_LBUTTONDOWN)) {
				getmouseclick(WM_LBUTTONDOWN, x1, y1);
				clearmouseclickall();
				if (x1 > screenWidth - 5 || x1<X1 || y1 > Y2 || y1 < 0) {
					outtextxy(X21 + 10, Y2 + 20, "Chon lai A");
					x1 = 0;
				}
				else {
					cleartext();
					putpixel(x1, y1, 14);
					//clearmouseclick(WM_LBUTTONDOWN);
					//changeTD(x1, y1);
					newx1 = x1;
					newy1 = y1;
					changeTD(newx1, newy1);
					sprintf_s(TDA, "A(%d , %d)", newx1, newy1);
					outtextxy(x1, y1 + 5, TDA);
					std::cout << x1 << " " << y1 << std::endl;
					//lineto(x1, y1);
				}
			}
		}
		//Toa do B
		else if (x2 == 0) {
			if (ismouseclick(WM_LBUTTONDOWN)) {
				getmouseclick(WM_LBUTTONDOWN, x2, y2);
				clearmouseclickall();
				if (x2 > screenWidth - 5 || x2<X1 || y2 > Y2 || y2 < 0) {
					outtextxy(X21 + 10, Y2 + 20, "Chon lai B");
				}
				else {
					cleartext();
					putpixel(x2, y2, 14);
					//clearmouseclick(WM_LBUTTONDOWN);
					newx2 = x2;
					newy2 = y2;
					changeTD(newx2, newy2);
					sprintf_s(TDB, "B(%d , %d)", newx2, newy2);
					outtextxy(x2, y2 + 5, TDB);
					std::cout << x2 << " " << y2 << std::endl;
					MidPointLine(x1, y1, x2, y2, 14);
				}
			}
		}
		//cac phep bien doi
		else if (x4 == 0) {
			while (1) {
				if (ismouseclick(WM_LBUTTONDOWN)) {
					getmouseclick(WM_LBUTTONDOWN, x4, y4);
					clearmouseclickall();
					//tinh tien den 1 diem bat ki
					if (x4 >= XleftTT && x4 <= XrightTT &&y4 >= YleftBD &&y4 <= YrightBD) {
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
										changeTD(x1, y1);
										std::cout << x1 << " " << y1<<std::endl;
										changeTD1(x1,y1);
										std::cout << x1 << " " << y1 << std::endl;
										dx = newx - x1;
										dy = newy - y1;
										break;
									}
								}
							}
						}
						x1 = x1 + dx; x2 = x2 + dx;
						y1 = y1 + dy; y2 = y2 + dy;
						newx1 = x1;
						newx2 = x2;
						newy1 = y1;
						newy2 = y2;
						changeTD(newx1, newy1);
						changeTD(newx2, newy2);
						sprintf_s(TDA, "A(%d , %d)", newx1, newy1);
						sprintf_s(TDB, "B(%d , %d)", newx2, newy2);
						outtextxy(x1, y1 + 5, TDA);
						outtextxy(x2, y2 + 5, TDB);
						MidPointLine(x1, y1, x2, y2, 14);
					}
					//quay diem
					if (x4 >= XleftQ+40 && x4 <= XrightQ &&y4 >= YleftBD+35 &&y4 <= YrightBD) {
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
										putpixel(newx, newy, 14);
										newx1 = x1; newy1 = y1;
										newx2 = x2; newy2 = y2;
										changeTD(newx1, newy1);
										changeTD(newx2, newy2);
										changeTD(newx, newy);
										Quay(newx1, newy1, newx, newy, 90);
										Quay(newx2, newy2, newx, newy, 90);
										//sprintf(TDA, "A(%d , %d)", newx1, newy1);
										//sprintf(TDB, "B(%d , %d)", newx2, newy2);
										//outtextxy(x1, y1 + 5, TDA);
										//outtextxy(x2, y2 + 5, TDB);
										changeTD1(newx1, newy1);
										changeTD1(newx2, newy2);
										MidPointLine(newx1, newy1, newx2, newy2, 15);
										newx = 0;
										break;
									}
								}
							}
						}
					}
					//doi xung qua O
					if (x4 >= XleftDX && x4 <= XleftDX+40 &&y4 >= YleftBD+35 &&y4 <= YrightBD) {
						//tinh A moi
						dx = screenWidth / 2 + 100 - x1;
						dy = Y2 / 2 - y1;
						x1 = x1 + (2 * dx);
						y1 = y1 + (2 * dy);
						//tinh B moi
						dx = screenWidth / 2 + 100 - x2;
						dy = Y2 / 2 - y2;
						x2 = x2 + (2 * dx);
						y2 = y2 + (2 * dy);
						newx1 = x1;
						newx2 = x2;
						newy1 = y1;
						newy2 = y2;
						changeTD(newx1, newy1);
						changeTD(newx2, newy2);
						sprintf_s(TDA, "A(%d , %d)", newx1, newy1);
						sprintf_s(TDB, "B(%d , %d)", newx2, newy2);
						outtextxy(x1, y1 + 5, TDA);
						outtextxy(x2, y2 + 5, TDB);
						MidPointLine(x1, y1, x2, y2,14);
					}
					//doi xung qua Ox
					if (x4 >= XleftDX+40 && x4 <= XleftDX+80 &&y4 >= YleftBD+35 &&y4 <= YrightBD) {
						//tinh A moi
						dy = Y2 / 2 - y1;
						y1 = y1 + (2 * dy);
						//tinh B moi
						dy = Y2 / 2 - y2;
						y2 = y2 + (2 * dy);
						newx1 = x1;
						newx2 = x2;
						newy1 = y1;
						newy2 = y2;
						changeTD(newx1, newy1);
						changeTD(newx2, newy2);
						sprintf_s(TDA, "A(%d , %d)", newx1, newy1);
						sprintf_s(TDB, "B(%d , %d)", newx2, newy2);
						outtextxy(x1, y1 + 5, TDA);
						outtextxy(x2, y2 + 5, TDB);
						MidPointLine(x1, y1, x2, y2, 14);
					}
					//doi xung qua Oy
					if (x4 >= XleftDX + 80 && x4 <= XleftDX + 120 && y4 >= YleftBD + 35 && y4 <= YrightBD) {
						//tinh A moi
						dx = screenWidth / 2 + 100 - x1;
						x1 = x1 + (2 * dx);
						//tinh B moi
						dx = screenWidth / 2 + 100 - x2;
						x2 = x2 + (2 * dx);
						newx1 = x1;
						newx2 = x2;
						newy1 = y1;
						newy2 = y2;
						changeTD(newx1, newy1);
						changeTD(newx2, newy2);
						sprintf_s(TDA, "A(%d , %d)", newx1, newy1);
						sprintf_s(TDB, "B(%d , %d)", newx2, newy2);
						outtextxy(x1, y1 + 5, TDA);
						outtextxy(x2, y2 + 5, TDB);
						MidPointLine(x1, y1, x2, y2, 14);
					}
					//doi xung qua diem
					if (x4 >= XleftDX + 120 && x4 <= XleftDX + 160 && y4 >= YleftBD + 35 && y4 <= YrightBD) {
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
										changeTD(newxx, newyy);
										sprintf_s(TDA, "S(%d , %d)", newxx, newyy);
										outtextxy(newx, newy + 5, TDA);
										dx = newx - x1;
										x1 = x1 + (2*dx);
										dy = newy - y1;
										y1 = y1 + (2 * dy);
										dx = newx - x2;
										x2 = x2 + (2 * dx);
										dy = newy - y2;
										y2 = y2 + (2 * dy);
										break;
									}
								}
							}
						}
						newx1 = x1;
						newx2 = x2;
						newy1 = y1;
						newy2 = y2;
						changeTD(newx1, newy1);
						changeTD(newx2, newy2);
						sprintf_s(TDA, "A(%d , %d)", newx1, newy1);
						sprintf_s(TDB, "B(%d , %d)", newx2, newy2);
						outtextxy(x1, y1 + 5, TDA);
						outtextxy(x2, y2 + 5, TDB);
						MidPointLine(x1, y1, x2, y2, 14);
					}
					if (x4 >= XleftReturn  && x4 <= XrightReturn  &&y4 >= YleftReturn  &&y4 <= YrightReturn) {
						std::cout << "oke" << std::endl;
						//x4 = 0;
						break;
					}
				}
			}
		}
		else {
			if (ismouseclick(WM_LBUTTONDOWN)) {
				getmouseclick(WM_LBUTTONDOWN, x4, y4);
				clearmouseclickall();
				std::cout << "oke" << std::endl;
				break;
			}
		}
	}
}