#include <stdio.h>
#include <iostream>
#include <string.h>
#include <deque>
#include <assert.h>
using namespace std;


int main()
{
	deque<int> a;
	for(int i = 0; i < 5; ++i)
	{
		a.push_back(i);	
	}
	deque<int> b;
	a.swap(b);

	cout<< "Test!" << a.size()  << endl;
	cout<<b.size()<<endl;
	assert(1);
	return 0;
}
