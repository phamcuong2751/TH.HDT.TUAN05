#pragma once
#include "CNhanVat.h"
class CChienBinh : public CNhanVat
{
private:
	int SucAn;
	string TamTrang;
public:
	CChienBinh(void);
	void Nhap();
	void Xuat();
	int GetterSucAn();
	string GetterTamTrang();
};

