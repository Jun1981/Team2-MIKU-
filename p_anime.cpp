#include "include.h"
void p_anime(){


	if (key.c != -1){
		miku.anime_c--;//�A�j���[�V�����J�E���^�}�C�i�X
		if (miku.anime_c <= 0){

			if (key.z)miku.anime_c = 2;
			else miku.anime_c = 10;
			if (miku.anime >= 5){
				miku.anime = 0;
			}
			else{ miku.anime++; }
		}
	}
	else{
		miku.anime = 0;//�A�j�����Z�b�g


	}
}



