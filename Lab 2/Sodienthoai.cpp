#include <iostream>
using namespace std;

struct soDienThoai
{
	int maVung;
	int maKhuVuc;
	int so;
};

void nhap(soDienThoai &a)
{
	cout << "Nhap ma vung, ma khu vuc, so: ";
	cin >> a.maVung;
	cin >> a.maKhuVuc;
	cin >> a.so;
}

void xuat(soDienThoai a)
{
	cout << "\n So dien thoai cua toi la: (212) 767-8900";
	cout << "\n So cua ban la: (" << a.maVung << ") " << a.maKhuVuc << "-" << a.so << endl;
}

int main()
{
	deptrai:
	soDienThoai a;
	nhap(a);
	xuat(a);

	char c;
	cout << "Ban co muon lam tiep khong? 'y' de tiep tuc, thoat bang bat cu ki tu nao ";
	cin >> c;
	switch (c)
	{
	case ('y'):
		goto deptrai;
	default:
		break;
	}

	return 0;
}