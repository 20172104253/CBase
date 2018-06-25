// CBase.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CBase
{
public:
	 void display()
	{
		cout << "基类" << endl;
	}
};
class CDervid :public CBase
{
public:
	void display()//两个一样的display函数，但不是函数的重载，函数的重载需要参数不一样，而这叫函数的覆盖
	{
		cout << "派生类" << endl;
	}
};

int main()
{
	CBase *p;
	CDervid obj2;
	p = &obj2;
	p->display();
    return 0;
}

