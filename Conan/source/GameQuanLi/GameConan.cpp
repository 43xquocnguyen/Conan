#include "GameConan.h"

GameConan::GameConan() {
	this->soLuongManChoi = 0;
	for (int i = 0; i < 4; i++)
	{
		this->thuTuXuatHien.push_back(0);
	}
}
GameConan::~GameConan() {

}

void GameConan::KhoiTaoNhanVat() {
	NhanVat* x;
	for (int i = 0; i < 6; i++)
	{
		if (i == 0) {
			x = new Conan;
			x->KhoiTao();
		}
		else if (i == 1) {
			x = new Gin;
			x->KhoiTao();
		}
		else if (i == 2) {
			x = new Vodka;
			x->KhoiTao();
		}
		else if (i == 3) {
			x = new Korn;
			x->KhoiTao();
		}
		else if (i == 4) {
			x = new ThanhVienBiAn;
			x->KhoiTao();
		}
		else if (i == 5) {
			x = new NguoiMatQua;
			x->KhoiTao();
		}
		this->danhSachNhanVat.push_back(x);
	}
}
void GameConan::KhoiTaoVuAn() {
	int soLuongVuAnMoiMan;
	int doKhoTungVuAn;

	for (int i = 0; i < this->soLuongManChoi; i++)
	{
		vector<VuAn*> vuAnMoiMan;
		cin >> soLuongVuAnMoiMan;

		while (soLuongVuAnMoiMan--)
		{
			cin >> doKhoTungVuAn;
			VuAn* x = new VuAn(doKhoTungVuAn);
			vuAnMoiMan.push_back(x);
		}

		this->danhSachVuAn.push_back(vuAnMoiMan);
	}
}
void GameConan::KhoiTaoGame() {
	// Khởi tạo nhân vật
	this->KhoiTaoNhanVat();

	// Nhập số màn chơi
	cin >> this->soLuongManChoi;

	// Nhập vị trí xuất hiện
	for (int i = 0; i < 4; i++)
	{
		int x;
		cin >> x;
		this->thuTuXuatHien.push_back(x);
	}

	// Khởi tạo vụ án
	this->KhoiTaoVuAn();
}

bool GameConan::CheckEndGame() {
	int mauConan = this->danhSachNhanVat[0]->Mau();
	if (mauConan <= 0) {
		// end game
		return true;
	}
	return false;
}
void GameConan::Play() {
	// Check thông tin
	/*
	/----Xuất thông tin ra check----/
	cout << endl << endl;
	/----Xuất danh sách thông tin các nhân vật----/
	for (int i = 0; i < this->danhSachNhanVat.size(); i++)
	{
		this->danhSachNhanVat[i]->Xuat();
		cout << endl;
	}
	/----Xuất danh sách thông tin các vụ án----/
	for (int i = 0; i < this->danhSachVuAn.size(); i++)
	{
		for (int j = 0; j < this->danhSachVuAn[i].size(); j++)
		{
			this->danhSachVuAn[i][j]->Xuat();
			cout << "\t";
		}
		cout << endl;
	}*/

	// Game logic
	bool isWin = true;
	for (int i = 0; i < this->soLuongManChoi; i++)
	{
		// Phá án
		for (int j = 0; j < this->danhSachVuAn[i].size(); j++)
		{
			this->danhSachNhanVat[0]->PhaAn(this->danhSachVuAn[i][j]);
			if (CheckEndGame()) {
				// hết máu
				isWin = false;
				break;
			}
		}
		if (isWin == false) {
			break;
		}

		// Nếu màn này có nhân vật xuất hiện
		if (i + 1 == this->thuTuXuatHien[0]
		 || i + 1 == this->thuTuXuatHien[1]
		 || i + 1 == this->thuTuXuatHien[2]
		 || i + 1 == this->thuTuXuatHien[3])
		{
			int index = 0;
			for (; index < 4; index++)
			{
				if (i + 1 == this->thuTuXuatHien[index]) {
					break;
				}
			}
			index++;

			this->danhSachNhanVat[0]->DoiDau(this->danhSachNhanVat[index]);

			if (CheckEndGame()) {
				// hết máu
				isWin = false;
				break;
			}
		}

	}
	
	// Vượt qua tất cả màn chơi
	if (isWin) {
		// Gặp người mặt quạ
		this->danhSachNhanVat[0]->DoiDau(this->danhSachNhanVat[5]);
		if (CheckEndGame()) {
			// không đánh lại người mặt quạ
			// hết máu 
			// -> thua
			cout << "THAT BAI! HU..HU..HU\n";
		}
		else {
			// win
			cout << "CHIEN THANG! YAH OH!\n";
		}
	}
	else {
		cout << "THAT BAI! HU..HU..HU\n";
	}
}