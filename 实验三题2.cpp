#include"head.h"
bool is_prime(int num)
{
	int t = 0;
	if (num == 2)
	{
		return true;
	}
	else if(num>2)
	for (int i = 2; i < num;i++)
	{
		if (num % i == 0)
		{
			t++;
		}
		
	}
	if (t == 0)
	{
		return true;
	}
	else if (t > 0)
		return false;



}