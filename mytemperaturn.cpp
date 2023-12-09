#include"head.h"
//F = 9¡ÁC /5+32 
double celsius_to_fah(double cel)
{
	double fah;
	fah = 9 * cel / 5 + 32;
	cout << "celsius" << '\t' << "fahrenheit" << '\t' << endl;
	cout << cel << '\t' << fah << '\t' << endl;
	return fah;
}
//C = 5¡Á£¨F- 32£©/9£¬
double fahrenheit_tocelsius(double fah)
{
	double cel;
	cel = (fah - 32) * 5 / 9;
	cout <<  "fahrenheit" << '\t' << "celsius" << '\t' << endl;
	cout << fah << '\t' << cel << '\t' << endl;
	return cel;
}