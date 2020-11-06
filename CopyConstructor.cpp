#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class A
{
	public:
	A(){cout<<"default A constructor"<<endl;}
	A(int q):a(q)
	{
		cout<< "A.a = " << q <<endl;
	}
	virtual ~A(){}
	int a;
};

class B:public A
{
	public:
	B(){cout<<"default B constructor"<<endl;}
	B(int q, int w):A(q),b(w)
	{
		cout<< "B.a =" << a << "B.b =" << b <<endl;
	}
	virtual ~B(){}
	int b;
};

int main()
{
	A a1(1);
	B b1(2,3);
	B b2 = b1;
	
	cout<< "Test!" <<endl;
	cout<< b2.a << b2.b <<endl;


	A a2 = 4;

	return 0;
}
