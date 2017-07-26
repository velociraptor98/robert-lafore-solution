#include <iostream>
using namespace std;
struct time{
	int hours;
	int minutes;
	int seconds;
};
int main()
{
	char ch;
	time inst;
	cout<<"enter time in hrs:min:second format: ";
	cin>>inst.hours>>ch>>inst.minutes>>ch>>inst.seconds;
	unsigned long sec= (inst.hours*3600)+(inst.minutes*60)+inst.seconds;
	cout<<sec;
}