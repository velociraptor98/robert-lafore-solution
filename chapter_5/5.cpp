#include <iostream>
using namespace std;
long time_to_sec(int hours,int minutes,int seconds)
{
	long tot=(hours*3600)+(minutes*60)+seconds;
	return tot;
}
int main(){
	char ch;int hours,minutes,seconds;
	cout<<"enter the time in hrs:minutes:sec format: ";
	cin>>hours>>ch>>minutes>>ch>>seconds;
	long tot=time_to_sec(hours,minutes,seconds);
	cout<<tot<<" seconds";

}