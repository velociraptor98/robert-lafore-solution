#include <iostream>
using namespace std;

void swap(int&a,int&b){
	int t=a;
	a=b;
	b=t;
}
int main(){
	int a,b;
	cout<<"enter the two values: "<<endl;
	cin>>a;
	cin>>b;
	int& c=a;
	int& d=b;
	swap(a,b);
	cout<<a<<","<<b;
}