#include <iostream>
using namespace std;
int fact(int x)
{
	int f=1;
	for(int i=1;i<=x;i++)
	{
		f*=i;
	}
	return f;
}
int main(){
	int chairs,guest;
	cout<<"Enter the number of chairs in the party: ";
	cin>>chairs;
	cout<<"enter the number of guests: ";
	cin>>guest;
	cout<<"possible combinations : "<< fact(chairs)/fact(chairs-guest) <<endl;

}