#pragma once
#include "../NhanVat.h"

class ThanhVienBiAn : public NhanVat
{
public:
	ThanhVienBiAn();
	~ThanhVienBiAn();

	void PhaAn(VuAn*);
	void DoiDau(NhanVat*);

	void KhoiTao();
};

