/*
	struct内存占用
	char内存占用
*/

#include<stdlib.h>
#include<iostream>
using namespace std;

struct A
{
	A();
	~A();
};

struct B
{

};

struct C
{
	int c;
	int c1;
	char c3;
	double c4;
};

struct D
{
	virtual ~D();
};

int main()
{
	cout<< sizeof(A)<<","<<sizeof(B)<<","<<sizeof(C)<<","<<sizeof(D) <<endl;
	char a = 256;
	unsigned char b = 128;
	printf("%d,%d", a, b);
	system("pause");
	return 0;
}