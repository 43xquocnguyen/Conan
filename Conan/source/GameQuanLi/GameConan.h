#pragma once
#include "../VuAn/VuAn.h"
#include "../NhanVat.h"
#include "../NhanVat/Conan.h"
#include "../NhanVat/Gin.h"
#include "../NhanVat/Vodka.h"
#include "../NhanVat/Korn.h"
#include "../NhanVat/ThanhVienBiAn.h"
#include "../NhanVat/NguoiMatQua.h"
#include <vector>

class GameConan
{
private:
	int soLuongManChoi;
	vector<NhanVat*> danhSachNhanVat;
	vector<int> thuTuXuatHien;
	vector<vector<VuAn*>> danhSachVuAn;

public:
	GameConan();
	~GameConan();
	
	// Khởi tạo
	void KhoiTaoNhanVat();
	void KhoiTaoVuAn();
	void KhoiTaoGame();

	// play
	bool CheckEndGame();
	void Play();
};

