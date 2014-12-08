class jiki{


private:
	
public:
	int x, y;//座標
	int GH[8];//
	int GH_W[8][6];//歩きグラ
	int haba;//幅
	int tate;//縦サイズ
	int muki;//向き	

	int spd;//スピード
	int n_spd;//スピード斜め
	/////////////////////////

	int n_line;//斜めライン

	int m_mode;//移動モード

	int dead;//死亡フラグ

	int anime;//アニメーション
	int anime_c;//アニメーションカウンタ

};

extern jiki miku;//クラス宣言


extern void PG_Load(void);//自機画像読み込み関数