#include <iostream>
using namespace std;
float circarea(float a)
{
	return 3.14*a*a;
}
int main(){
	float a;
	cout<<"Enter the radius: ";
	cin>>a;
	cout<<"the area is: "<< circarea(a)<<endl;
}