#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct AA {
	int a;
	bool b;
	float c;
};

AA* GetAA()
{
	if(1)
	{
		return NULL;//return 编译不过	
	}
	return NULL;
}

int main()
{
	AA* A = GetAA();
	if(A)
	{
		cout<< "Test!" <<endl;	
	}
	cout<<"hh"<<endl;
	return 0;
}
