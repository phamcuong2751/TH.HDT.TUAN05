#include "CNongDan.h"

CNongDan::CNongDan()
{
	GioiTinh = "";
}

void CNongDan::Nhap()
{
	CNhanVat::Nhap();
	cin >> GioiTinh;
}

void CNongDan::Xuat()
{
	cout << GioiTinh;
}

string CNongDan::GetterGioiTinh()
{
	return GioiTinh;
}
