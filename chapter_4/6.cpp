#include <iostream>
using namespace std;
enum etype{ laborer,secretary,manager,accountant,executive,reseacher};
int main()
{
	etype a;
	cout <<"enter either l,s,m,a,e,r"<<endl;
	char ch;
	cin>>ch;
	switch(ch){
		case 'l':
		case 'L':a=laborer;
		         break;
		case 's':
		case 'S':a=secretary;
		         break;
		case 'm':
		case 'M':a=manager;
		         break;
		case 'a':
		case 'A':a=accountant;
		         break;
		case 'e':
		case 'E':a=executive;
		         break;
		case 'r':
		case 'R':a=reseacher;
		         break;
	}
	switch(a){
		case 0:cout<<"laborer"<<endl;
		       break;
		case 1:cout<<"secretary"<<endl;
		       break;
		case 2:cout<<"manager"<<endl;
		      break;
		case 3:cout<<"accountant"<<endl;
		       break;
		case 4:cout<<"executive"<<endl;
		       break;
		case 5:cout<<"reseacher"<<endl;
		       break;       
	}
}