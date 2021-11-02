#include <stdio.h>
#include <iostream>
#include <string.h>
#include <unistd.h>
using namespace std;
int main()
{
	string a = "1234";	
	a.erase(1,1);
	cout<<a<<endl;
	string b = "";
	for(int i = 0; i < 10; ++ i)
		b += to_string(i);	
	cout<<b<<endl;

	string c = "LLAL";
	if(c[0] == 'L')
		cout<< "hhh" << endl;
	cout<< c[2] << endl;		
	//int count = 0;
	//while(count <1000)
	//{
	//	count++;
	//	cout<<count<<endl;
	//	sleep(10);
	//}
	string d = "a";
	d = d + to_string(1);
	cout<<d<<endl;	
	return 0;
}
