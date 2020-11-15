#include "CTroChoi.h"

void CTroChoi::Nhap()
{
	string id;
	string data;

	int pos = 0;
	while (!cin.eof())
	{
		cin >> data;
		id = data.substr(0, 1);
		if (id == "N")
		{
			pos = cin.tellg();
			cin.seekg(pos - 4);

			CNongDan _NongDan;
			_NongDan.Nhap();
			DS_NongDan.push_back(_NongDan);
		}
		else
		{
			pos = cin.tellg();
			cin.seekg(pos - 4);

			CChienBinh _ChienBinh;
			_ChienBinh.Nhap();
			DS_ChienBinh.push_back(_ChienBinh);
		}
	}
}

float CTroChoi::TinhLuongGao()
{
	int SoChenCom = 0;
	for (int i = 0; i < DS_NongDan.size(); i++)
	{
		if (DS_NongDan[i].GetterGioiTinh() == "Nam")
		{
			SoChenCom += 10;
		}
		if (DS_NongDan[i].GetterGioiTinh() == "Nu")
		{
			SoChenCom += 8;
		}
	}

	for (int i = 0; i < DS_ChienBinh.size(); i++)
	{
		if (DS_ChienBinh[i].GetterTamTrang() == "Vui")
		{
			SoChenCom += DS_ChienBinh[i].GetterSucAn();
		}
		else
			SoChenCom += DS_ChienBinh[i].GetterSucAn() / 2;
	}
	return SoChenCom / 15.0;
}