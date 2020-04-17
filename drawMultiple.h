#pragma once
#include "graphics.h"

typedef struct Dinh
{
	int x, y;
};
//A, B, C, D theo kim dong ho
//static Dinh d[3] = { { 649,213 },{ 661,245 },{ 693,216 } };
//static Dinh a[3] = { {604,239},{625,211},{ 582,205} };
//static Dinh b[3] = { {617,265},{650,265},{635,304} };
void DDA(int xA, int yA, int xB, int yB, int color);
void drawMultiple(Dinh d[], int n, int color);

