#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
	vector<int>a;
	for(int i = 1; i < 5; ++ i)
	{
		a.push_back(i);	
	}
	for(vector<int>::iterator iter = a.begin(); iter != a.end();)
	{
		if((*iter)==1)
		{
			iter = a.erase(iter);
		}
		else
		{
			++iter;
		}
	}
	for(vector<int>::iterator iter = a.begin(); iter != a.end(); ++iter)
	{
		cout<< *iter <<endl;
	}
	return 0;
}
