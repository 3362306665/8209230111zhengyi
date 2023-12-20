#include<iostream>
using namespace std;
class student
{
private:
	int id;
	int score;

	friend class group;
};
class group
{
private:
	student arry[5];

public:
	//输入对象数组的属性
	void setvalue(group*pa)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "输入第" << i + 1 << "个学生的id：";
			cin >> pa->arry[i].id;
			cout << "输入第" << i + 1 << "个学生的成绩：";
			cin >> pa->arry[i].score;
		}
	}
	
	//选择数组中分数高的，输出学号
	void max(group*pa)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = i + 1; j < 5; j++)
			{
				if (pa->arry[i].score < pa->arry[j].score)
				{
					student temp;
					temp = pa->arry[i];
					pa->arry[i] = pa->arry[j];
					pa->arry[j] = temp;
				}
			}

		}
		cout << "成绩最高的学生id为：";
		cout << pa->arry[0].id << endl;
	}
};
/*int main()
{
	group aa;
	group *pa = &aa;
	aa.setvalue(pa);
	aa.max(pa);



	system("pause");
}*/