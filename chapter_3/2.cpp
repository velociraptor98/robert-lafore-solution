#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float result;
	float input;
	int choice;
	cout<<"type 1: to convert fahrenheit to celius"<<endl;
	cout<<"type 2: to cpnvert celsius to fahrenheit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"enter the temp in fahrenheit"<<endl;
		        cin>>input;
		        result=(input-32)*(5.0/9);
		        cout<<result<<endl;
		        break;
		case 2: cout<<"Enter the temp in celcius"<<endl;
		        cin>>input;
		        result=(1.8*input)+32;
		        cout<<result<<endl;
		        break;	
	};
}