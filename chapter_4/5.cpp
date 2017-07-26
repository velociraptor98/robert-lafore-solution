#include <iostream>
using namespace std;
struct date{
	int day;
	int month;
	int year;
};
int main(){
	char ch;
	cout<<"enter the date in dd/mm/yyyy:";
	date cu;
	cin>>cu.day>>ch>>cu.month>>ch>>cu.year;
	cout<<cu.day<<ch<<cu.month<<ch<<cu.year<<endl;

}