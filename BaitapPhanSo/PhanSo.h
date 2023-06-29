#ifndef _PHANSO_

#ifndef _STDLIB_
	#include <iostream>
	using INT = int16_t;
#endif

class PhanSo
{
private:
	INT tuSo;
	INT mauSo;
public:
	PhanSo();
	PhanSo(const INT&, const INT&);

	PhanSo& rutGon();
	INT& gcd(INT tuSo, INT mauSo);

	friend std::istream& operator >> (std::istream&, PhanSo&);
	friend std::ostream& operator << (std::ostream&, PhanSo);
	friend PhanSo& operator + (const PhanSo&, const PhanSo&);
};
#endif
