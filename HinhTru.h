#pragma once
#include "graphics.h"
#include "lineMidPoint.h"
#include "background.h"
#include "eclipMidPoint.h"
typedef struct Td {
	int x, y, z;
};
void drawHT(int r,int h);
void OutTDHT(Td toado[],int r,int h);