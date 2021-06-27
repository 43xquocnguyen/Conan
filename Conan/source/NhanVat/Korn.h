#pragma once
#include "../NhanVat.h"

class Korn : public NhanVat
{
public:
	Korn();
	~Korn();

	void PhaAn(VuAn*);
	void DoiDau(NhanVat*);

	void KhoiTao();
};