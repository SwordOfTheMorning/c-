#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct A
{
	A(){cout<< "A constructor" << "m_a =" << m_a <<endl;}
	int m_a;
};

class C
{
	public:
	C(){cout<< "C constructor" << "m_c =" << m_c <<endl;}
	C(int c){cout<<"C 111 "<< "m_c =" <<m_c<<endl;}
	int m_c;
};

class B
{
	public:
	B():c1(1)//总结，在创建对象的时候，会按成员变量声明的顺序初始化成员变量，如果在成员初始化列表里有定义就走列表，否则走默认构造函数
	{
		cout<< "B constructor" << "m_b =" << m_b <<endl;
		cout<<  "B constructor c.m_c=" << c.m_c <<endl;
//		memset(m_array, 0, sizeof(A));
	}
	int m_b;
	string m_c;
	A m_array[4];
	C c;
	C c1;
	C c2;	
};
B b1;
int main()
{
	cout <<"main start!"<<endl;
	B b2;
	cout << b1.m_b << "\n" << b1.m_array[0].m_a << "\n" << b1.m_c <<endl;
	cout << b2.m_b << "\n" << b2.m_array[0].m_a << "\n" << b2.m_c <<endl;

	return 0;
}
