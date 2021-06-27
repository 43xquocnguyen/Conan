#pragma once
#include "../NhanVat.h"

class NguoiMatQua : public NhanVat
{
public:
	NguoiMatQua();
	~NguoiMatQua();

	void PhaAn(VuAn*);
	void DoiDau(NhanVat*);

	void KhoiTao();
};

