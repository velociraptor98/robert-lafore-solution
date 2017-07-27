#include <iostream>
using namespace std;

struct distance {
	int foot,inch;
};
distance comp(distance a,distance b){
	float a1=(a.foot*12)+a.inch;
	float a2=(b.foot*12)+b.inch;
	if( a1>a2)
		return a;
	else
		return b;
}
int main()
{
	char ch;
	distance d,e;
	cout<<"enter the first distance: ";
	cin>>d.foot>>ch>>d.inch;
	cout<<"Enter the second distance: ";
	cin>>e.foot>>ch>>e.inch;
	distance c=comp(a,b);
	cout<<c.foot<<"\'"<<c.inch<<"\"";
}