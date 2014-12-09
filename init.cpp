
#include "include.h"

//初期化
void init(void){

	PG_Load();//自機のグラ読み込み
	map_load();//マップの読み込み


	//ミクの初期位置
	miku.x = 320; miku.y = 240;
	miku.r_haba =32 ; miku.tate = 64;
	miku.haba = 48;
	miku.muki = 0;//初期の向き　下向き


	//スピード
	miku.spd = 4; miku.n_spd = 3;

	//アニメーション
	int aloop=10;//デフォルトアニメループカウンタ
	miku.anime_c = aloop;
	

	//////////////////////////




}