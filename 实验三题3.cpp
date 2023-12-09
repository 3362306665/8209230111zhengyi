#include"head.h"
#include"mytemperature.h";
int main()
{
	double cel;
	cin >> cel;
	celsius_to_fah(cel);
	double fah;
	cin >> fah;
	fahrenheit_tocelsius(fah);
	system("pause");
}