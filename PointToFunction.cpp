#include <stdio.h>
#include <iostream>
using namespace std;

class A
{
public:
	A():m_p(NULL){}
	~A(){}
	typedef void (A::*FunP)();
	void Print1()
	{
		cout<< "print1" <<endl;
	}
	void Print2()
	{
		cout<< "print2" <<endl;
	}
	void SetPoint(int index)
	{
		if(index == 1)
		{
			m_p = &A::Print1;	
		}
		else
		{
			m_p = &A::Print2;			
		}
	}
	void Print()
	{
		if(!m_p)
			return;
		(this->*m_p)();
	}	
private:
	FunP m_p;
};

typedef void (*NFunP)();
void NPrint()
{
	cout<< "NPrint" <<endl;
}
//成员函数指针与普通函数指针的区别
//函数类型T的左值能隐式转换成指向该函数的指针纯右值。这不作用于非静态成员函数，因为不存在指代非静态成员函数的左值。
//非静态成员函数指针里的信息可能不仅是函数首地址，还有多重继承、虚函数等导致的地址偏移信息。
int main()
{
	A a;
	a.SetPoint(1);
	a.Print();
	cout<< "Test!" <<endl;
	NFunP p = NPrint;
	p();
	return 0;
}
