
#include "include.h"

//������
void init(void){

	PG_Load();//���@�̃O���ǂݍ���
	map_load();//�}�b�v�̓ǂݍ���


	//�~�N�̏����ʒu
	miku.x = 320; miku.y = 240;
	miku.r_haba =32 ; miku.tate = 64;
	miku.haba = 48;
	miku.muki = 0;//�����̌����@������


	//�X�s�[�h
	miku.spd = 4; miku.n_spd = 3;

	//�A�j���[�V����
	int aloop=10;//�f�t�H���g�A�j�����[�v�J�E���^
	miku.anime_c = aloop;
	

	//////////////////////////




}