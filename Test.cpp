#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct AA {
	int a;
	bool b;
	float c;
};

int main()
{
	AA A;
	memset(&A, 0, sizeof(AA));
	cout<< "Test!" <<endl;
	cout<< A.a << A.b << A.c << endl;

	return 0;
}
