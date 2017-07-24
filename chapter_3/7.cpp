#include <iostream>
using namespace std;
int main()
{
	float amnt;
	int years;
	cout<<"Enter the initial amount"<<endl;
	cin>>amnt;
	cout<<"enter the number of years"<<endl;
	cin>>years;
	cout<<"enter the rate of interest"<<endl;
	float rate;
	cin>>rate;
	rate=rate/100;
	float final=amnt*pow((1+rate/12),(years*12));
	cout<<"At the end of "<<years<<" years,you will have "<< final<<" dollars"<<endl;

}