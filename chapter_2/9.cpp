#include <iostream>
using namespace std;
int main()
{
	int num1,den1,num2,den2;
	char dc;
	cin>>num1>>dc>>den1;
	cin>>num2>>dc>>den2;
	cout<<(num1*den2+num2*den1)<<dc<<den1*den2<<endl;
}