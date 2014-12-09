

#include "include.h"
   

//マップ通行チェック
void mb_chk(int k, int *x){ //kキャラの向き x残りの距離

	miku.ry = miku.y + 32;//見た目のミクのy座標
	miku.rx = miku.x + 8;
	switch (k){
	case 0:
		for (i = 0; i<map.bn; i++){
			if (miku.y+miku.tate <= bhit[i].y  && miku.y+miku.tate + miku.spd > bhit[i].y   && miku.rx + miku.r_haba > bhit[i].x && miku.rx < bhit[i].x + ChipXY){

				x[1] = bhit[i].y - (miku.y + miku.tate);
				return;

			}
		}
		x[1] = miku.spd; x[0] = 0;
		
		break;
	case 2:			
		for(i=0;i<map.bn;i++){
			if (miku.rx >=bhit[i].x + ChipXY && miku.rx - miku.spd < bhit[i].x + ChipXY && miku.y + miku.tate > bhit[i].y && miku.ry < bhit[i].y + ChipXY){

				x[0] = miku.rx - (bhit[i].x + ChipXY);
				return ;

			}
		}
		x[0] = miku.spd; x[1] = 0; 
		break;
	case 3:
	/*	if (jiki.N_Line == 2){
			if (jiki.x - jiki.n_Spd < teki[0].x + miku.haba && jiki.y - jiki.n_Spd < teki[0].y + miku.haba){

				if (jiki.x >= teki[0].x + miku.haba && jiki.y >= teki[0].y + miku.haba){
					x[0] = jiki.x - (teki[0].x + miku.haba);
					x[1] = jiki.y - (teki[0].y + miku.haba);
				}
				else if (jiki.x < +teki[0].x + miku.haba && jiki.y >= teki[0].y + miku.haba){
					x[0] = jiki.n_Spd;
					x[1] = jiki.y - (teki[0].y + miku.haba);
				}
				else if (jiki.y < +teki[0].y + miku.haba && jiki.x >= teki[0].x + miku.haba){
					x[0] = jiki.x - (teki[0].x + miku.haba);

					x[1] = jiki.n_Spd;
				}
			}

		}
		else x[0] = x[1] = jiki.n_Spd;*/
		break;
	case 4:
		
		for (i = 0; i<map.bn; i++){
			if (miku.ry >= bhit[i].y+ChipXY  && miku.ry - miku.spd < bhit[i].y+ChipXY   && miku.rx + miku.r_haba > bhit[i].x && miku.rx < bhit[i].x + ChipXY){

				x[1] = miku.ry - (bhit[i].y+ChipXY );
				return;

			}
		}
		x[1] = miku.spd; x[0] = 0;
		break;

	case 6:

		for (i = 0; i<map.bn; i++){
			if (miku.rx+miku.r_haba <= bhit[i].x  && miku.rx +miku.r_haba+ miku.spd > bhit[i].x  && miku.y + miku.tate > bhit[i].y && miku.ry < bhit[i].y + ChipXY){

				x[0] = bhit[i].x-(miku.rx+miku.r_haba);
				return;

			}
		}
		x[0] = miku.spd; x[1] = 0;
		break;


	}//switch終わり
}
