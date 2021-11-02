#include <stdio.h>
#include <iostream>
using namespace std;

class A{
public:
	static int a;
	static int geta(){return a;}
};
int A::a = 1;

int main()
{
	int b = A::geta();
	cout<<b<<endl;
	return 0;
}
