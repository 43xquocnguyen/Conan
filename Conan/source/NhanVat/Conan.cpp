#include "Conan.h"

Conan::Conan() : NhanVat() {
	this->pl = isConan;
	this->mauBanDau = this->sucManhBanDau = this->soVuAnDaPha = 0;
	this->vatPham = new int[2];
	this->vatPham[0] = this->vatPham[1] = 0;
}
Conan::~Conan() {
	delete[] this->vatPham;
}

void Conan::KhoiTao() {
	cin >> this->mau;
	cin >> this->sucManh;
	this->mauBanDau = this->mau;
	this->sucManhBanDau = this->sucManh;
}

void Conan::PhaAn(VuAn* vuan) {
	int doKhoVuAn = vuan->doKhoVuAn();

	if (this->sucManh >= doKhoVuAn) {
		this->sucManh += doKhoVuAn;
		this->soVuAnDaPha++;
	}
	else {
		if (this->SuDungNgoiSaoTienTri()) {
			this->sucManh += doKhoVuAn;
			this->soVuAnDaPha++;
		}
		else
		{
			this->mau -= doKhoVuAn / 2;
		}
	}

}
void Conan::DoiDau(NhanVat* doiThu) {
	PhanLoai pl = doiThu->_PhanLoai();
	int sucManhDoiThu = doiThu->SucManh();
	int mauDoiThu = doiThu->Mau();

	switch (pl)
	{
		case isGin: {
			if (this->sucManh >= sucManhDoiThu) {
				this->vatPham[0]++;
			}
			else {
				this->SuDungNgoiSaoThanKy(); // su dung 
				if (this->sucManh >= sucManhDoiThu) {
					this->vatPham[0]++;
				}
				else {
					this->mau -= sucManhDoiThu;
				}
			}
			break;
		}
		case isVodka: {
			if (this->sucManh >= sucManhDoiThu) {
				this->mau += sucManhDoiThu;
			}
			else {
				this->SuDungNgoiSaoThanKy(); // su dung 
				if (this->sucManh >= sucManhDoiThu) {
					this->mau += sucManhDoiThu;
				}
				else {
					this->mau -= sucManhDoiThu;
				}
			}
			break;
		}
		case isKorn: {
			if (this->sucManh >= sucManhDoiThu) {
				this->vatPham[1]++;
			}
			else {
				this->SuDungNgoiSaoThanKy(); // su dung 
				if (this->sucManh >= sucManhDoiThu) {
					this->vatPham[1]++;
				}
				else {
					this->mau -= sucManhDoiThu;
				}
			}
			break;
		}
		case isTVBA: {
			if (this->soVuAnDaPha >= 3) {
				this->sucManh += 500;
			}
			else {
				this->vatPham[0] = this->vatPham[1] = 0;
			}
			break;
		}
		case isNguoiMQ: {
			if (this->sucManh + this->mau < mauDoiThu) {
				this->SuDungNgoiSaoThanKy();
				if (this->sucManh + this->mau < mauDoiThu) {
					// thua
					this->mau = -1;
				}
			}
		}
	}
}

void Conan::SuDungNgoiSaoThanKy() {
	if (vatPham[0] >= 1) {
		this->mau = this->mauBanDau;
		this->sucManh = this->sucManhBanDau;
		vatPham[0]--;
	}
}
bool Conan::SuDungNgoiSaoTienTri() {
	if (vatPham[1] >= 1) {
		vatPham[1]--;
		return true;
	}
	return false;
}