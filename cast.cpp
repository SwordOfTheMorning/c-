#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	char f = 'a';
	char* g = "a";
	int i = static_cast<int>(f);
	int j = reinterpret_cast<long>(g);
	cout<<i<<endl;
	cout<<j<<endl;
	return 1;
}
