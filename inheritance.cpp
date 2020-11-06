#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class A
{
public:
	A(){cout<<"A default construct"<<endl;}
	A(int param)
	{
		cout<<"A construct"<<endl;
		cout<<param<<endl;
	}
	void print(){cout<<"A print"<<endl;}
	virtual void hhh(){cout<<"A hhhhh"<<endl;}
};

class B
{
public:
	B(){cout<<"B default construct"<<endl;}
	B(int param)
	{
		cout<<"B construct"<<endl;
		cout<<param<<endl;
	}
};

class C:public A, public B
{
public:
	C(int param):A(param)
	{
		cout<<"C construct"<<endl;
		cout<<param<<endl;
	}
};

class D:public A
{
public:
	D(){cout<<"D default construct"<<endl;}
	void print(){cout<<"D print"<<endl;}
	//virtual void hhh(){cout<<"A hhhhh"<<endl;}

};

int main()
{
	C c(1);
	A a;
	D d;
	a.print();
	d.print();
	A* aa = new A();
	A* aaa = new D();
	D* dd = new D();
	//print是虚函数才有效果
	aa->print();
	aaa->print();
	aaa->hhh();
	dd->hhh();
	delete aa;
	delete aaa;
	delete aa;
	return 0;
}
