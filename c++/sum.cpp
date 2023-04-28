#include <iostream>
using namespace std; 
int sum(int x,int y){
	int s;
	s=x+y;
	cout<<"sum = :"<<s<<"\n";
	return 0;
	}
int main()
{
	int x,y;
	cout<<"enter a digit : \n";
	cin>>x;
	cout<<"enter next number : \n";
	cin>>y;
	sum(x,y);
	
	return 0;
	}

