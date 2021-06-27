#include "VuAn.h"

VuAn::VuAn() {
	this->doKho = rand() % 1001;
}
VuAn::VuAn(const int& doKho) {
	this->doKho = doKho;
}
VuAn::~VuAn() {

}

int VuAn::doKhoVuAn() {
	return this->doKho;
}