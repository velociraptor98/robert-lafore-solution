#include <iostream>
using namespace std;

struct distance{
	float feet;
	float inch;
};
struct volume{
	distance l;
	distance b;
	distance h;
};
int main(){
	volume room;
	char s;
	cout<<"enter the length:";
	cin>>room.l.feet>>s>>room.l.inch;
	cout<<"enter the breadth:";
	cin>>room.b.feet>>s>>room.b.inch;
	cout<<"enter the height:";
	cin>>room.h.feet>>s>>room.h.inch;
	float l=room.l.feet+(room.l.inch/100);
	float b=room.b.feet+(room.b.inch/100);
	float h=room.h.feet+(room.h.inch/100);
	cout<<l*b*h<<endl;


}