#include <stdio.h>
#include <iostream>
#include <string.h>
#include <map>
using namespace std;

class A
{
public:
	A():a(0){}
	~A(){}
	int a;
	//map<int,int> m_map;
};

int main()
{
	cout<< sizeof(A) <<endl;
	return 0;
}
