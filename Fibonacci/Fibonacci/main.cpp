/*
�Ѳ��������У�1��1��2��3��5������д�������n�
*/

#include<stdio.h>
#include<iostream>
#include<assert.h>
using namespace std;

int fibonacci1(const int n)
{
	assert(n > 0);
	if (n < 3)
	{
		return 1;
	}
	return fibonacci1(n - 1) + fibonacci1(n - 2);
}

int fibonacci2(const int n)
{
	assert(n > 0);
	if (n < 3)
	{
		return 1;
	}
	int a = 1;
	int b = 1;
	int resault = a + b;
	for (int i = 4; i < n + 1; ++i)
	{
		a = b;
		b = resault;
		resault = a + b;
	}
	return resault;
}

int main()
{
	cout<<"������Ҫ��õڼ��"<<endl;
	int n1;
	cin>>n1;
	cout<< "����ʹ�÷�������1Ϊ�ݹ飬2Ϊ�ǵݹ飺" <<endl;
	int n2;
	cin>>n2;
	cout<< (n2 == 1 ? fibonacci1(n1) : fibonacci2(n1)) << endl;
	system("pause");
	return 0;
}