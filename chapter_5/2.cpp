#include <iostream>
using namespace std;
double power(double n,int p= 2)
{
	double result=1.0;
	if(p==0)
		return 1;
	if(p==1)
		return n;
	
	for(int i=0;i<p;i++)
	{
		result*=n;
	}
	return result;
}
int main(){
	double n,pow;
	int p;
	char ch;
	cout<<"Enter the n value: ";
	cin>>n;
	cout<<"do you want to enter a power?(y/n) ";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
	cout<<"enter the power: ";	
	cin>>p;
	pow=power(n,p);
    }
    else
    {
    	pow=power(n);
    }
	cout<<"the power is: "<<pow;
}