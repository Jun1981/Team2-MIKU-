//斜めチェック


#include "include.h"

MHit hb[300];//
double ang[2];
double kakudo = (-45) / 180.0 * M_PI;

void dia_chk(void){//返り値の数字は自機の向いている方向
	/*int i;
	double sa[2][2];
	sa[0][0] = miku.x - (bhit[0].x + ChipXY);
	sa[0][1] = -1 * ((miku.y + ChipXY) - bhit[0].y);
	double Ang[2];
	Ang[0] = atan2(sa[0][1], sa[0][0]);

	sa[1][0] = miku.x + ChipXY - bhit[1].x;
	sa[1][1] = -1 * (miku.y - (bhit[1].y + ChipXY));
	Ang[1] = atan2(sa[1][1], sa[1][0]);

	double kakudo = (-45) / 180.0 * M_PI;

	if (Ang[0]  <kakudo &&  Ang[1] >kakudo)	miku.n_line= 2;
	else miku.n_line = 0;




	DrawFormatString(480, 128 + 64, 0xffffff, "角度0 %f", Ang[0]);
	DrawFormatString(480, 128 + 80, 0xffffff, "角度1 %f", Ang[1]);
	DrawFormatString(480, 128 + 96, 0xffffff, "45r %f", kakudo);*/


	for (i = 0; i < map.bn; i++){
		hb[i].x_sa[0] = miku.rx - (bhit[i].x + ChipXY);
		hb[i].y_sa[0] = -1 * ((miku.y + miku.tate) - bhit[0].y);
		ang[0] = atan2(hb[i].y_sa[0], hb[i].x_sa[0]);

		hb[i].x_sa[1] = miku.x + ChipXY - bhit[1].x;
		hb[i].y_sa[1] = -1 * (miku.y - (bhit[1].y + ChipXY));
		ang[1] = atan2(hb[i].y_sa[1], hb[i].x_sa[1]);

		if (ang[0]  <kakudo &&  ang[1] >kakudo)	{
			miku.n_line[i] = 2;//数字はミクの向いている方向

			DrawFormatString(480, 128 + 64 * i, 0xffffff, "%dの右下ライン", i);

		}
		else 	miku.n_line[i] = 0;
	}

}