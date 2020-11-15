#include"CTroChoi.h"

void main()
{
	int SoNgay;
	cout << "Nhap so ngay chinh chien: ";
	cin >> SoNgay;

	CTroChoi ChayTroChoi;
	freopen("INPUT.txt", "rt", stdin);
	ChayTroChoi.Nhap();
	float SoGaoMotNgay = ChayTroChoi.TinhLuongGao();
	freopen("OUTPUT.txt", "wt", stdout);
	cout << SoGaoMotNgay * SoNgay;
}