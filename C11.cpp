#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


int main()
{
	vector<int> a;
	a.push_back(5);
	a.push_back(5);
	a.push_back(5);
	for(int i : a)
	{
		cout<< i <<endl;
	}
	return 0;
}
