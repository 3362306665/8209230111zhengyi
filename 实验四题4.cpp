#include"head.h"
void merge(const int list1[], int size1, const int list2[], int size2,int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
		
	
	}
	for (int j = 0; j < size2; j++)
	{
		
		list3[size1 + j] = list2[j];
	}
	//Ã°ÅİÅÅĞò
	for (int k = 0; k < size1 + size2-1; k++)
	{
		
		for (int m = 0; m < size1 + size2-k-1; m++)
		{
			if (list3[m] > list3[m+1])
			{
				int tem;
				tem = list3[m];
				list3[m] = list3[m+1];
				list3[m+1] = tem;

			}
		}
	}
	cout << "The merged list is :";
	for (int n = 0; n < size1 + size2; n++)
	{
		cout << list3[n] << " ";
	}
}
/*int main()
{
	int size1, size2;
	cout << "Enter list1: ";
	cin >> size1;
	int *list1;
	list1 = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
		
		
    }
	cout << "Enter list2: ";
	cin >> size2;
	int* list2;
	list2 = new int[size2];
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}

	int*list3 = new int[size1+size2];
	merge(list1, size1, list2, size2,list3);




}*/