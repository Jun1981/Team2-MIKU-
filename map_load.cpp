#include"include.h"

MHit bhit[300];//�ʍs����

int ChipXY=32;//�}�b�v�`�b�v�̃T�C�Y�R�Q


 unsigned static int c=0;

  MAP map;
  
  //������

void map_load(void){

	
	//LoadDivGraph("../Img/MAP/test2.jpg",4,4,1,32,32,m1,0);
	LoadDivGraph("../Img/MAP/TileB.png",256,16,16,32,32,m2,0);
 //�����蔻��l�����W
 for(i=0;i<15;i++){
	 for(j=0;j<20;j++){
	
		 if(mhit2[i][j]==1){
			
			 bhit[map.bn].x=32*j;  //�����W
			 bhit[map.bn].y=32*i;  //y���W

			 map.bn++;//�����蔻��̌�

			 
		 }
	 }
 }

}



