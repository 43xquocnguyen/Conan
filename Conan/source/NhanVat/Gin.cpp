#include "Gin.h"

Gin::Gin() : NhanVat() {
	this->pl = isGin;
}
Gin::~Gin() {

}

void Gin::PhaAn(VuAn* vuAn) {

}
void Gin::DoiDau(NhanVat* nhanVat) {

}

void Gin::KhoiTao() {
	this->mau = 1000;
	this->sucManh = 500;
}