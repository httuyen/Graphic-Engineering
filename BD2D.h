#pragma once
#include "conTrol.h"
#include "graphics.h"
#include "lineMidPoint.h"
#include <math.h>
void TinhDX(int x1, int y1,int newx,int newy, int &dx, int &dy);
void Quay(int &x1, int &y1, int newx, int newy, float alpha);
void QuayO(int &x1, int &y1, int newx, int newy, float alpha);
void DXO(int &x1, int &y1);
void DXOy(int &x1);
void DXOx(int &y1);
void DXPoint(int &x1,int &y1,int newx,int newy);
void BDTLV1(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, int &x4, int &y4, int &x5, int &y5, int &x6, int &y6, int &x7, int &y7, int &x8, int &y8, int &x9, int &y9,int &x10,int &y10, float n, int &r);
void BDTLV2(int &xc, int &yc, int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, int &x4, int &y4, int &x5, int &y5, int &x6, int &y6, int &x7, int &y7, int &x8, int &y8, int &x9, int &y9, int &x10, int &y10, int &x11, int &y11, float n, int &r);