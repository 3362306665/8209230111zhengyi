#include"head.h"
//求最大公约数
int GCD(int m, int n)
{
	int t;
	t = m > n ? n : m;
	while (m % t != 0 || n % t != 0)
	{
		t--;
	}

	cout << "最大公约数为" << t << endl;
	return t;
}
//求最大公约数和最小公倍数
int GL(int& m, int& n)
{
	int t;
	t = m > n ? n : m;
	while (m % t != 0 || n % t != 0)
	{
		t--;
	}

	cout << "最大公约数为" << t << endl;
	int k;
	k = m > n ? m : n;
	while (k % m != 0 || k % n != 0)
	{
		k++;
	}
	cout << "最小公约数为" << k << endl;
	return t, k;
}
int main()
{
	int m, n;
	cout << "输入自然数m,n " << endl;
	cout << "m= ";
	cin >> m;
	cout << "输入自然数m,n" << endl;
	cout << "n= ";
	cin >> n;
	GCD(m, n);
	GL(m, n);
	system("pause");
	system("cls");
}