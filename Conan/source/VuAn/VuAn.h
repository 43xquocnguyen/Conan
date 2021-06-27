#pragma once
#include <iostream>
#include <stdlib.h>
#include <ctime>

class VuAn
{
private:
	int doKho;
public:
	VuAn();
	VuAn(const int&);
	~VuAn();

	int doKhoVuAn();

	void Xuat() {
		std::cout << this->doKhoVuAn();
	}
};

