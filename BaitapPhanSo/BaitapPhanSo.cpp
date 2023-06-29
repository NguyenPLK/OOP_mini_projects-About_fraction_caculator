#include <iostream>
#include "PhanSo.h"

int main()
{
    PhanSo* myPhanSo_1 =  new PhanSo(1,1);
    PhanSo* myPhanSo_2 =  new PhanSo(1,1);

    std::cin >> *myPhanSo_1 >> *myPhanSo_2;
    std::cout << *myPhanSo_1 + *myPhanSo_2;
}
