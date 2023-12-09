#include"head.h"
int indexOf(const char s1[], const char s2[])
{
	//s1是s2的子串
	int a, b;
	a = strlen(s1);
	b = strlen(s2);
	if (a > b)
	{
		cout << "s1不是s2的子串" << endl;
	}
	else
	{
		//比较s1和s2中的元素相不相等，相等则判断是不是子串，不相等则s1往后比较
		for (int i = 0; i <= b - a; i++)//循环次数
		{
			int j;
			for ( j = 0; j < a; j++)//s1
			{
				if (s1[j] != s2[j + i])
				{
					break;
				}
			}
		
				if (j == a)
				{
					return i;
				}
			
			
		}
		return -1;
	}
	
} 


/*int main()
{
	

	char s1[100], s2[100];
	cout << "Enter the first string : ";
	cin.getline(s1, 100);
	cout << "Enter the second string: ";
	cin.getline(s2, 100);
	if (indexOf(s1, s2) != -1)
	{
		cout << "indexOf" << "（“";
		for (int a = 0; a < strlen(s1); a++)
			cout << s1[a];
		cout << "”）and（“";
		for (int b = 0; b < strlen(s2); b++)
			cout << s2[b];
		cout << "”）is" << indexOf(s1, s2)+1<<endl;
	}
	else
	{
		cout << "indexOf" << "（“";
		for (int a = 0; a < strlen(s1); a++)
			cout << s1[a];
		cout << "”）and（“";
		for (int b = 0; b < strlen(s2); b++)
			cout << s2[b];
		cout << "”）is" << indexOf(s1, s2) << endl;
	}
	system("pause");
}*/