#include<stdlib.h>
#include<iostream>
using namespace std;

class A
{
public:
	A();
	~A();
	void AA();
	void AA(int a);
	virtual void AAA();
	int a;
};

A::A()
{
}

A::~A()
{
}

void A::AA()
{
	cout<< "A:AA" <<endl;
}

void A::AAA()
{
	cout<< "A:AAA" <<endl;
}

void A::AA(int a)
{
	cout<< "A:AA a" <<endl;
}


class B : public A
{
public:
	B();
	~B();
	//void AA();
	void AAA();
};

B::B()
{
}

B::~B()
{
}

//void B::AA()
//{
//	cout<< "B:AA" <<endl;
//}

void B::AAA()
{
	cout<< "B:AAA" <<endl;
}


int main()
{
	/*A* a = new B();
	a->AA();
	a->AAA();*/

	B* b = new B();
	b->AA(1);
	b->AAA();
	system("pause");
	return 0;
}