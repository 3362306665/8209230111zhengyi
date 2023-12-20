#include<iostream>
using namespace std;
class Cuboid
{
private:
	int length;
	int width;
	int high;
	int V;
public:
	void setvalue(Cuboid*p)
	{
		cout << "输入长方体的长：";
		cin >> p->length;
		cout << "输入长方体的宽：";
		cin >> p->width;
		cout << "输入长方体的高：";
		cin >> p->high;


	}
	void calculate(Cuboid*p)
	{
		
		p->V = p->length * p->width * p->high;
	}

	void display(Cuboid temp)
	{
		cout << temp.V << endl;;


	}


};
/*int main()
{
	//定义
	Cuboid a,b,c;
	Cuboid* pa = &a;
	Cuboid* pb = &b;
	Cuboid* pc = &c;
	//赋值
	cout << "输入第一个长方体的属性" << endl;
	a.setvalue(pa);
	cout << "输入第二个长方体的属性" << endl;
	a.setvalue(pb);
	cout << "输入第三个长方体的属性" << endl;
	a.setvalue(pc);
	//运算
	a.calculate(pa);
	a.calculate(pb);
	a.calculate(pc);
	//输出
	cout << "第一个长方体的体积为：";
	a.display(a);
	cout << "第二个长方体的体积为：";
	a.display(b);
	cout << "第三个长方体的体积为：";
	a.display(c);
}*/