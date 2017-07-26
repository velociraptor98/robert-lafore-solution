#include <iostream>
using namespace std;
 struct point{
 	int x;
 	int y;
 };
 int main()
 {
 	point p1,p2,p3;
 	cout<<"enter the x and y values of the first point:"<<endl;
 	cin>>p1.x;
 	cin>>p1.y;
 	cout<<"enter the x and y values of the second point:"<<endl;
 	cin>>p2.x;
 	cin>>p2.y;
 	p3.x=p1.x+p2.x;
 	p3.y=p1.y+p2.y;
 	cout<<"cordinates are ---> X: "<<p3.x<<" Y: "<<p3.y<<endl;
 }