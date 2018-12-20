#include <iostream>
using namespace std;

struct tien
{
	int tienBanDau;
	int nam;
	float lai;
};

void nhap(tien &a)
{
	cout << "Nhap so tien ban gui: ";
	cin >> a.tienBanDau;
	cout << "Nhap so nam ban gui: ";
	cin >> a.nam;
	cout << "Nhap lai cua ngan hang: ";
	cin >> a.lai;
}

double tinhTien(tien a)
{
	double tong = a.tienBanDau;
	for (int i = 1; i <= a.nam; i++)
	{
		tong = tong + a.tienBanDau * (a.lai/100);
	}
	return tong;
}

void xuat (tien a)
{
	cout << "\nSo tien ban dau la: " << a.tienBanDau << " Dola";
	cout << "\nSau " << a.nam << " nam tien cua ban la: " << tinhTien(a) << " Dola" << endl;
}

int main()
{
	tien a;
	nhap(a);
	xuat(a);
	system("pause");
	return 0;
}