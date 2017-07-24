#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number to print the variables of:"<<endl;
	cin>>n;

	for(int i=1;i<=200;i++){
		cout<<setw(7)<<n*i;
		if(i%10==0)
			cout<<endl;
	}
}