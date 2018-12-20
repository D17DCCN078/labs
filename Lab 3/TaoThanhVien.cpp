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
	serial::soLanTao(); //soLanTao s? t?ng lên 1

	serial s2;
	s2.in();
	serial::soLanTao(); //soLanTao s? t?ng lên 2 - vì khi kh?i t?o bi?n static giá tr? c?a bi?n t?nh luôn ???c b?o toàn trong su?t ch??ng trình
	return 0;
}

