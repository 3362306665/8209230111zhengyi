#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	Time(){}
	void input(Time& input_t)//输入对象的属性
	{
		Time temp;
		cout << "输入hour:" << '\t';
		cin >> temp.hour;
		if (temp.hour > 23 || temp.hour < 0)
		{
			cout << "输入错误" << endl;
			system("pause");
		}
		cout << "输入minute:" << '\t';
		cin >> temp.minute;
		if (temp.minute < 0 || temp.minute>60)
		{
			cout << "输入错误" << endl;
			system("pause");
		}
		cout << "输入sec:" << '\t';
		cin >> temp.sec;
		if (temp.sec < 0 || temp.sec>60)
		{
			cout << "输入错误" << endl;
			system("pause");
		}
		input_t = temp;


	}
	void output(Time output_t)//输出对象
	{
		cout << output_t.hour <<":";
		cout << output_t.minute << ":";
		cout << output_t.sec << endl;


	}
};
int main()
{
	Time tl;    //定义t1为Time类对象

	tl.input(tl);

	tl.output(tl);
	return 0;
}