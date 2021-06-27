#pragma once
#include "../NhanVat.h"

class Vodka : public NhanVat
{
public:
	Vodka();
	~Vodka();

	void PhaAn(VuAn*);
	void DoiDau(NhanVat*);

	void KhoiTao();
};

