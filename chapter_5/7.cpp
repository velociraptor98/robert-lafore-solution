#include <iostream>
using namespace std;
 
 double power(double n,int p= 2)
{
	double result=1.0;
	if(p==0)
		return 1;
	if(p==1)
		return n;
	
	for(int i=0;i<p;i++)
	{
		result*=n;
	}
	return result;
}
int power(double n,int p){
	int result=1;
	if(p==0)
		return 1;
	if(p==1)
		return n;
	
	for(int i=0;i<p;i++)
	{
		result*=n;
	}
	return result;
}
long power(double n,int p){
	long result=1;
	if(p==0)
		return 1;
	if(p==1)
		return n;
	
	for(int i=0;i<p;i++)
	{
		result*=n;
	}
	return result;
}
float power(double n,int p){
	float result=1;
	if(p==0)
		return 1;
	if(p==1)
		return n;
	
	for(int i=0;i<p;i++)
	{
		result*=n;
	}
	return result;
}

