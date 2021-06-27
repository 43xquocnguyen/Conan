#pragma once
#include "../NhanVat.h"

class Gin : public NhanVat
{
public:
	Gin();
	~Gin();

	void PhaAn(VuAn*);
	void DoiDau(NhanVat*);
	
	void KhoiTao();
};

