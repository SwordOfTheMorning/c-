#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int aplusb(int a, int b)
{
	return (a | b);	
}
int main()
{
	int a = aplusb(100, -100);
	cout<<a<<endl;
	return 0;
}
