#pragma once
#include "CNhanVat.h"
class CNongDan : public CNhanVat
{
private:
	string GioiTinh;
public:
	CNongDan();
	void Nhap();
	void Xuat();
	string GetterGioiTinh();
};

