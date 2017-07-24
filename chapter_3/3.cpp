#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	long val=0;
	char ch;
	int count=0;
	while(count<6)
	{
		ch=getche();
		val=(val*10)+(ch-48);
		++count;
	}
	cout<<endl;
	cout<<val<<endl;
}