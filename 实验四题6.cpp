#include"head.h"
void count(const char s[], int counts[])
{
	for (int j = 0; j < 26; j++)
	{

		counts[j] = 0;
	}
	for (int i = 0; i < strlen(s); i++)
	{
		
		char ah;
		ah=tolower(s[i]);
	
		if (isalpha(ah))
		{
			counts[ah - 'a']++;
		}
		
    }

	for (int j = 0; j < 26; j++)
	{
		if (counts[j] > 0)
		{
			
			char ch = (char)(j+'a');
			cout << ch << " " << counts[j] << " times" << endl;
		}
	}

}
/*int main()
{
	char s[100];
	int counts[26];
	cin.get(s, 100);
		count(s, counts);
		


}*/