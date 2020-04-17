#pragma comment(lib, "graphics.lib")
#include"graphics.h"
#include <iostream>
#include<stdio.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>
#include "background.h"
#include "conTrol.h"

using namespace std;
typedef int code[5];
namespace {
	code b;
	int a1, b1, a2, b2;
}
//int b1=0, a2=0, b2=0;
const int xmin = screenWidth / 2 - 100, ymin = screenHeight / 2 + 50, xmax = screenWidth / 2 + 300, ymax = screenHeight / 2 - 200;

//static int a1, b1, a2, b2;
//static int x, xmin, ymin, xmax, ymax, gd, gm;

void macode(int x, int y, code b);
int xen(int x1, int y1, int x2, int y2);
void xenhinh();