// CBase.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CBase
{
public:
	void display()
	{
		cout << "����" << endl;
	}
};
class CDervid :public CBase
{
public:
	void display()//����һ����display�����������Ǻ��������أ�������������Ҫ������һ��������к����ĸ���
	{
		cout << "������" << endl;
	}
};

int main()
{
	CBase *p;
	CDervid *q;
	CBase obj1;
	CDervid obj2;
	p = &obj1;
	q = &obj2;
	p->display();
	q->display();
    return 0;
}

