#include "include.h"

void key_henkan(void){


	//上下左右おしっぱ

	if (ChkKAny == TRUE){

		if ((Key_Info & 0x0f) == 0x01){ key.c = 2; }//左
		if ((Key_Info & 0x0f) == 0x02){ key.c = 6; }//右
		if ((Key_Info & 0x0f) == 0x04){ key.c = 4; }//上
		if ((Key_Info & 0x0f) == 0x08){ key.c = 0; }//下
						  
						  
						  
		if ((Key_Info & 0x0f) == 0x05){ key.c = 3; }//左上
						   
		if ((Key_Info & 0x0f) == 0x06){ key.c = 5; }//右上
						   
		if ((Key_Info & 0x0f) == 0x09){ key.c = 1; }//左下
						   
		if ((Key_Info & 0x0f) == 0x0a){ key.c = 7; }//右下
		/////////////////////////////

		if ((Key_Info & 0x0f) == 0x00){
			key.c = -1;//十字キー無効
		}




		if ((Key_Info & 0x20) == 0x20){ key.z = 1; }
		else{ key.z = 0; }

	}
	else{ key.c = -1; key.z = 0; }//キー無効

}