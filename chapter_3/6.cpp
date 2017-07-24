#include <iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		unsigned int fact=1;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			 fact*=i;
		}
		cout<<fact<<endl;
		if(n==0)
			exit(0);

	}while(n!=0);
	
}