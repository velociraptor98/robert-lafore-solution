#include <iostream>
using namespace std;
void zeroSmaller(int& a,int& b)
{
	if(a>b)
		b=0;
	else
		a=0;
}
int main(){
	int a,b;
	cout<<"enter the 2 values"<<endl;
	cin>>a;
	cin>>b;
	int& c=a;
	int& d=b;
	zeroSmaller(c,d);
	cout<<a<<","<<b<<endl;
}