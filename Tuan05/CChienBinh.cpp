#include "CChienBinh.h"
CChienBinh::CChienBinh()
{
	TamTrang = "";
}

void CChienBinh::Nhap()
{
	CNhanVat::Nhap();
	cin >> SucAn;
	cin >> TamTrang;
}

int CChienBinh::GetterSucAn()
{
	return SucAn;
}

string CChienBinh::GetterTamTrang()
{
	return TamTrang;
}