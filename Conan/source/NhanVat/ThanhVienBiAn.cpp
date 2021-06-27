#include "ThanhVienBiAn.h"

ThanhVienBiAn::ThanhVienBiAn() : NhanVat() {
	this->pl = isTVBA;
}
ThanhVienBiAn::~ThanhVienBiAn() {

}

void ThanhVienBiAn::PhaAn(VuAn* vuAn) {

}
void ThanhVienBiAn::DoiDau(NhanVat* nhanVat) {

}

void ThanhVienBiAn::KhoiTao() {
	this->mau = 0;
	this->sucManh = 0;
}