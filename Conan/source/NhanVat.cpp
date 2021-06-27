#include "NhanVat.h"

NhanVat::NhanVat() {
	this->mau = this->sucManh = 0;
	this->pl = ChuaXacDinh;
}
NhanVat::~NhanVat() {

}

int NhanVat::Mau() {
	return this->mau;
}
int NhanVat::SucManh() {
	return this->sucManh;
}
PhanLoai NhanVat::_PhanLoai() {
	return this->pl;
}