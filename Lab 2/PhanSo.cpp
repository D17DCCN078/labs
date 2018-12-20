#include <iostream>
using namespace std;


class PhanSo
{
private:
	int Tu, Mau;

public:
	PhanSo(void)
	{
		Tu = 1;
		Mau = 1;
	}

	~PhanSo(void)
	{

	}

	PhanSo(int ts, int ms)
	{
		Tu = ts;
		Mau = ms;
	}

	PhanSo(int ts)
	{
		Tu = ts;
		Mau = 1;
	}

	PhanSo(const PhanSo &x)
	{
		Tu = x.Tu;
		Mau = x.Mau;
	}

	void Nhap()
	{
		cout << "\nNhap Tu So: ";
		cin >> Tu;
		ABC:
		cout << "\nNhap Mau So: ";
		cin >> Mau;
		if(Mau == 0)
		{
			cout << "\nMau So phai khac khong, vui long kiem tra lai";
			goto ABC;
		}
	}

	void Xuat()
	{
		cout << "Phan So la: " << Tu <<"/" << Mau << endl;
	}

	PhanSo operator +(PhanSo x)
	{
		PhanSo Tong;
		Tong.Tu = Tu * x.Mau + Mau * x.Tu;
		Tong.Mau = Mau * x.Mau;
		return Tong;
	}

	PhanSo operator -(PhanSo x)
	{
		PhanSo Hieu;
		Hieu.Tu = Tu * x.Mau - Mau * x.Tu;
		Hieu.Mau = Mau * x.Mau;
		return Hieu;
	}

	PhanSo operator *(PhanSo x)
	{
		PhanSo Tich;
		Tich.Tu = Tu * x.Tu;
		Tich.Mau = Mau * x.Mau;
		return Tich;
	}

	PhanSo operator /(PhanSo x)
	{
		PhanSo Thuong;
		Thuong.Tu = Tu * x.Mau;
		Thuong.Mau = Mau * x.Tu;
		return Thuong;
	}

};



int main()
{
	deptrai:
	PhanSo ps1, ps2;
	ps1.Nhap();
	ps2.Nhap();

	PhanSo Tong = ps1 + ps2;
	PhanSo Hieu = ps1 - ps2;
	PhanSo Tich = ps1 * ps2;
	PhanSo Thuong = ps1 / ps2;

	cout << "Tong 2 ps la: ";
	Tong.Xuat();
	cout << "Hieu 2 ps la: ";
	Hieu.Xuat();
	cout << "Tich 2 ps la: ";
	Tich.Xuat();
	cout << "Thuong 2 ps la: ";
	Thuong.Xuat();
	
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

	system("pause");
	return 0;
}