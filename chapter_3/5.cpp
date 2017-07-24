#include <iostream>
using namespace std;
int main()
{
	
	for(int i=1;i<=20;i++)
	{
		for(int spaces=1;spaces<=20-i;spaces++)
		{
			cout<<" ";
		}
		for(int k=0;k<2*i-1;++k)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}