#include<iostream>
using namespace std;
class time
{
	private :
		int hour;
		int minute;
		int sec;
	public :
		time() //Phương thức khởi tạo mặc định
		{
			hour=0;
			minute=0;
			sec=0;	
		}

		time(int gio,int phut,int giay) //Phương thức khởi tạo tham số
		{
			hour = gio;
			minute = phut; 
			sec = giay;
		}

		void nhap()
		{
			cout << "Nhap gio: ";
			cin >> hour;
			cout << "Nhap phut: ";
			cin >> minute;
			cout << "Nhap giay: ";
			cin >> sec;
		}

		void xuat() //Phương thức xuất
		{
			int minute=this->minute;
			int hour=this->hour;
			int sec=this->sec;
			if(sec>=60){
				int i=sec/60;
				minute+=i;
			}
			if(minute>=60){
				int i=minute/60;
				hour+=i;
			}
			hour=hour%12;
			minute=minute%60;
			sec=sec%60;
			cout<<hour<<":"<<minute<<":"<<sec<<endl;
		}

		time operator+(const time &t) //Operator + của 2 thời gian
		{
			time t2;
			int hour;
			int minute;
			int sec;
			t2.hour=this->hour+t.hour;
			t2.minute=this->minute+t.minute;
			t2.sec=this->sec+t.sec;
			return t2;
		}
};



int main()
{
	time t0;
	t0.xuat(); // Chay vào khởi tạo mặc định

	time t1; // Chay vào phương thức nhập
	t1.nhap();
	t1.xuat();

	time t2(0,59,67); //Chay vào khởi tạo tham số
	t2.xuat();

	time t3; //Chạy vào Operatior + 2 thời gian
	t3=t1+t2;
	t3.xuat();
	return 0;
}
