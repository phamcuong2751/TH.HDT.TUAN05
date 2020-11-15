#pragma once
#include "CNhanVat.h"
#include "CNongDan.h"
#include "CChienBinh.h"
#include <vector>

class CTroChoi
{
private:
	vector<CNongDan> DS_NongDan;
	vector<CChienBinh> DS_ChienBinh;
public:
	void Nhap();
	void Xuat();
	float TinhLuongGao();
};

