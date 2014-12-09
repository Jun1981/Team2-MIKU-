#include "include.h"





void Game_Main(void){
	

	key_chk();//キーチェック
	key_henkan();//キー変換
	
	
	pm();//プレイヤー計算
	p_anime();//自キャラアニメーション

	
	map_show();//マップ表示
	//dia_chk();//斜めチェック
	jiki_show();
	

}