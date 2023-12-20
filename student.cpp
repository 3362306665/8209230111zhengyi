//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"student.h"    //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(Student* const p)
{

    cout << "请输入num：" << '\n';
    cin >> p->num;
    cout << "请输入name：" << '\n';
    cin >> p->name;
    cout << "请输入sex(男用m表示，女用f表示）：" << '\n';
    cin >> p->sex;
    if (p->sex != 'm' && p->sex != 'f')
    {
        cout << "输入性别错误" << endl;
    }
}