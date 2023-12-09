#include"head.h"
void sort( int arr[],int n)
{
	for(int i=0;i<n;i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem;
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;

			}
		}



}
/*int main()
{
	int n;
	cout << "输入数组元素的个数：";
	cin >> n;
	int* arr = new int[n];
	cout << "输入数组元素为：";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr,n);
	cout << "排列后的数组为：";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}

	system("pause");
}*/