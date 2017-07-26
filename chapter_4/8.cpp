
#include <iostream>
using namespace std;
struct fractions{
	int numerator;
	int denominator;
};
int main()
{
	fractions fst,snd,ans;
	char ch;
	cout<<"enter the first fraction: ";
	cin>>fst.numerator>>ch>>fst.denominator;
	cout<<"enter the second fraction: ";
	cin>>snd.numerator>>ch>>snd.denominator;
	ans.numerator=(fst.numerator*snd.denominator)+(fst.denominator * snd.numerator);
	ans.denominator=fst.denominator*snd.denominator;
	cout<<ans.numerator<<ch<<ans.denominator;
}