#include <iostream>
using namespace std;
struct phone{
	int fst,mid,lst;
};

int main()
{	
	phone phone1,phone2;
	phone1={212,767,8900};
	cout<<"enter first part of phone number:";
	cin>>phone2.fst;
		cout<<"enter middle part of phone number:";
	cin>>phone2.mid;
		cout<<"enter last part of phone number:";
	cin>>phone2.lst;
	cout<<"my number is ("<<phone1.fst<<") "<<phone1.mid<<" "<<phone1.lst<<endl;
	cout<<"my number is ("<<phone2.fst<<") "<<phone2.mid<<" "<<phone2.lst<<endl;

}