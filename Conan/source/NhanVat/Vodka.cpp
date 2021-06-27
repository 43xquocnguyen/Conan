#include "Vodka.h"

Vodka::Vodka() :NhanVat() {
	this->pl = isVodka;
}
Vodka::~Vodka() {

}


void Vodka::PhaAn(VuAn *vuAn) {

}
void Vodka::DoiDau(NhanVat* nhanVat) {

}

void Vodka::KhoiTao() {
	this->mau = 1200;
	this->sucManh = 600;
}