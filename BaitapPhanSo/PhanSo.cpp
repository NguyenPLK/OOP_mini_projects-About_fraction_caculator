#include "PhanSo.h"

PhanSo::PhanSo() : mauSo(1), tuSo(1) {}

PhanSo::PhanSo(const INT& m_tuSo, const INT& m_mauSo) : tuSo(m_tuSo), mauSo(m_mauSo) {};

INT& PhanSo::gcd(INT tuSo, INT mauSo) {
	if (mauSo == 0) return tuSo;
	return gcd(mauSo, tuSo % mauSo);
}

std::istream& operator >> (std::istream& is, PhanSo& phanSo) {
	std::cout << "Hay nhap tu so: "; is >> phanSo.tuSo;
	std::cin.ignore();
	std::cout << "Hay nhap mau so: "; is >> phanSo.mauSo;
	return is;
}

std::ostream& operator << (std::ostream& os, PhanSo phanSo) {
	os << "Phan so: " << phanSo.tuSo << "/" << phanSo.mauSo << std::endl;
	return os;
}

PhanSo& operator + (const PhanSo& phanSo_1, const PhanSo& phanSo_2) {
	PhanSo myPhanSo;
	myPhanSo.tuSo = (phanSo_1.tuSo * phanSo_2.mauSo) + (phanSo_1.mauSo * phanSo_2.tuSo);
	myPhanSo.mauSo = (phanSo_1.mauSo * phanSo_2.mauSo);
	return myPhanSo.rutGon();
}

PhanSo& PhanSo::rutGon()
{
	INT& bienTam = gcd(this->tuSo, this->mauSo);
	if (bienTam == 1) {
		return *this;
	}
	else {
		this->tuSo /= bienTam;
		this->mauSo /= bienTam;
	}
	return *this;
}