/*
*
 *.*.
 *..*..*..
 *...*...*...*...
 *....*....*....*....*....
 *.....*.....*.....*.....*.....*.....
 *......*......*......*......*......*......*......
 *.......*.......*.......*.......*.......*.......*.......*....... 
*/

#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n = 8;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			cout<< "*" ;
			for (int k = 0; k < i; k++)
			{
				cout<<".";
			}
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}