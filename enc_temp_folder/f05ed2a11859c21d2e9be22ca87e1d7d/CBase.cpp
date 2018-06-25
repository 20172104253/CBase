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
	void display()
	{
		cout << "派生类" << endl;
	}
};

int main()
{
	CBase obj1;
	obj1.display();
	CDervid obj2;
	obj2.display();
    return 0;
}

