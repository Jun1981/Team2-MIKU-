class MAP{
public:
int bn;//������u���b�N�̐�
};


class MHit{
public:

	 //int mchip[15][20];//�}�b�v�`�b�v
	 //int mhit[15][20];//�ʍs�ݒ�

	int x,y;
	int haba;

	double x_sa[2];//x���W�̍�
	double y_sa[2];
	
};


extern MHit bhit[300];

extern MAP map;


extern void map_load(void);

extern int ChipXY;//�}�b�v�`�b�v�̃T�C�Y�R�Q

