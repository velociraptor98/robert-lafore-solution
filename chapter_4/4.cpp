
#include <iostream>
using namespace std;
struct employee{
	int empno;
	float comp;
};
int main()
{
	employee a,b,c;
	cout<<"enter no and comp:";
	cin>>a.empno;
	cin>>a.comp;
	cout<<"enter no and comp:";
	cin>>c.empno;
	cin>>c.comp;
	cout<<"enter no and comp:";
	cin>>c.empno;
	cin>>c.comp;
	cout<<a.empno<<"  "<<a.comp<<endl;
	cout<<b.empno<<"  "<<b.comp<<endl;
	cout<<c.empno<<"  "<<c.comp<<endl;
}