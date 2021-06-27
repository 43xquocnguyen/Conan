#include "NguoiMatQua.h"

NguoiMatQua::NguoiMatQua() : NhanVat() {
	this->pl = isNguoiMQ;
}
NguoiMatQua::~NguoiMatQua() {

}

void NguoiMatQua::PhaAn(VuAn* vuAn) {

}
void NguoiMatQua::DoiDau(NhanVat* nhanVat) {

}


void NguoiMatQua::KhoiTao() {
	this->mau = 3000;
	this->sucManh = 0;
}