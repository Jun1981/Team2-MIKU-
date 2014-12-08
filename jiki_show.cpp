#include "include.h"

void jiki_show(){
	
	if (key.c==-1)DrawGraph(miku.x, miku.y, miku.GH[miku.muki], 1);
	else DrawGraph(miku.x, miku.y, miku.GH_W[miku.muki][miku.anime], 1);
}


