#include<iostream>
using namespace std;
int main()
{
	int a, b, c,d;
	cin >> a >> b;
	c = a > b ? a : b;
	while (c % a != 0 || c % b != 0)
	{
		c++;
	}
	cout <<"最小公倍数="<< c << endl;
	d = a < b ? a : b;
	while(a%d!=0||b%d!=0)
	{
		d--;
	}
	cout << "最大公约数="<< d << endl;


	return 0;
}