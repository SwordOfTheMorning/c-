#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class A
{
public:
	A():a(0)
	{
		cout<< "A construct" <<endl;
	}
	~A()
	{
		cout<< "A ~ " <<endl;
	}
	int a;
};

int main()
{
	cout<< "Test!" <<endl;
	A* p = new A();
	A* pp = p;
	cout<< "p->a " << p->a <<endl;
	A& R = *p;
	R.a = 1;
	cout<< "p->a " << p->a <<endl;
	cout<< "R.a " << R.a << p  << endl;
	delete p;
	p = NULL;
	if(pp)
	{
		cout << "pp"<< pp << "pp->a" << pp->a  <<endl;	
	}
	if(p)
	{
		cout << "p" << p << "p->a" << p->a <<endl; 
	}
	cout<< "R.a " << R.a << &R <<endl;
	
	return 0;
}
