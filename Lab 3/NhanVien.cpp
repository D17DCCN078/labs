#include<iostream>
using namespace std;
class employee
{
	private:
		int id;
		float money;

	public:
		employee(int mnv,float tien)
		{
			id=mnv;
			money=tien;
		}

		void tinh(int year)
		{
			float m= money;

			for(int i=0; i < year; i++)
			{
				m = (m+(m*0.055));
			}
			cout<<"So tien sau "<< year <<" : "<<m<<endl;
		}
};

int main()
{
	employee e1(1,3000); //Nh?p mã nhân viên v?i ti?n
	e1.tinh(3); //Ti?n sau 3 n?m
	return 0;
}
