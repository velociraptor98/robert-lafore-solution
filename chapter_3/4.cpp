#include <iostream>
using namespace std;
int main()
{
	int fnum,lnum;
	char op,rep;
	float result;
    do{
    	cout<<"enter the first number operator and second number";
    	cin>>fnum>>op>>lnum;
    	switch(op){ 
    		case '+': result=fnum+lnum;
    		          cout<<"answer:"<<result<<endl;
    		          cout<<"do another(y/n)"<<endl;
    		          cin>>rep;
    		          break;
    		case '-': result=fnum-lnum;
    		          cout<<"answer:"<<result<<endl;
    		          cout<<"do another(y/n)"<<endl;
    		          cin>>rep;
    		          break;
    		case '*': result=fnum*lnum;
    		          cout<<"answer:"<<result<<endl;
    		          cout<<"do another(y/n)"<<endl;
    		          cin>>rep;
    		          break;
    		case '/': result=fnum/lnum;
    		          cout<<"answer:"<<result<<endl;
    		          cout<<"do another(y/n)"<<endl;
    		          cin>>rep;
    		          break;
    	}
    }while(rep!='n');

}

