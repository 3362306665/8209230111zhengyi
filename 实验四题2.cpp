#include"head.h"
void list1(double list[])
{
	
	
	bool changed = true;
	do
	{
		

		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
	

}

/*int main()
{
	double list[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	 list1(list);
	 for (int j = 0; j< 10; j++)
	 {
		 cout << list[j] << " ";
	 }
	
	system("pause");
}*/