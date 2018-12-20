#include<iostream>
using namespace std;
class serial
{
	private:
		int id;
		static int number;

	public:
		serial()
		{
			number++;
			id=number;
		}

		static void soLanTao() //Kh?i t?o bi?n t?nh
		{
			cout << number << endl;
		}

		void in()
		{
			cout<<this->id<<endl;
		}
};

int serial::number=0; //??t bi?n t?nh = 0

int main()
{
	serial s1;
	s1.in();
	serial::soLanTao(); //soLanTao s? t?ng l�n 1

	serial s2;
	s2.in();
	serial::soLanTao(); //soLanTao s? t?ng l�n 2 - v� khi kh?i t?o bi?n static gi� tr? c?a bi?n t?nh lu�n ???c b?o to�n trong su?t ch??ng tr�nh
	return 0;
}

