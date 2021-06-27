#pragma once
#include "../VuAn/VuAn.h"
#include "../NhanVat.h"
#include "Gin.h"

class Conan : public NhanVat
{
private:
	int mauBanDau, sucManhBanDau; // giữ để dùng ngôi sao thần kỳ
	int soVuAnDaPha;
	// vatPham[0] là ngôi sao thần kì
	// vatPham[1] là ngôi sao tiên tri
	int* vatPham;

public:
	Conan();
	~Conan();

	void KhoiTao();

	void PhaAn(VuAn*);
	void DoiDau(NhanVat*);

	void SuDungNgoiSaoThanKy();
	bool SuDungNgoiSaoTienTri();
};

