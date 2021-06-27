#pragma once
#include "VuAn/VuAn.h"
#include <iostream>
#include <string>
using namespace std;

enum PhanLoai {
	isConan, isGin, isVodka, isKorn, isTVBA, isNguoiMQ, ChuaXacDinh
};

class NhanVat
{
protected:
	int mau, sucManh;
	PhanLoai pl;

public:
	NhanVat();
	~NhanVat();

	int Mau();
	int SucManh();
	PhanLoai _PhanLoai();

	virtual void KhoiTao() = 0;

	virtual void PhaAn(VuAn*) = 0;
	virtual void DoiDau(NhanVat*) = 0;

	void Xuat() {
		switch (this->pl)
		{
			case isConan: {
				cout << "Conan";
				break;
			}
			case isGin: {
				cout << "Gin";
				break;
			}
			case isVodka: {
				cout << "Vodka";
				break;
			}
			case isKorn: {
				cout << "Korn";
				break;
			}
			case isTVBA: {
				cout << "TVBA";
				break;
			}
			case isNguoiMQ: {
				cout << "Nguoi Mat Quy";
				break;
			}
		}
		cout << " | Mau: " << this->mau << " | " << this->sucManh;
	}
};

