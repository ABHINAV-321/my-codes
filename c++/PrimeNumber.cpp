
// to find prime number from one number to another
#include <iostream>
using namespace std;
int prime(int num){
	int i,flag;
	for (i=2;i<num;i++){
		if (num % i==0){
			flag=0;
			cout<<"it is not a prime"<<endl;
			break;
			}
			else{
				flag=1;
				}
		}
if (flag==1){
	cout<<"it is a prime"<<endl;
	}
	
	return 0;
	}
int	run(){
	int num ;
	cout<<"enter a no. to find prime number :";
	cin>>num;
	prime(num);
	return 0;
	
	}
int main(){
	int num;
	cout<<"enter a no. to find prime number :";
	cin>>num;
	prime(num);
	for ( ; ; ){
		int t;
		cout<<"enter 0 to try again or 1 to stop :";
	    cin>>t;
	    if(t==0){
			run();
			}else
			{
			break;	
				}
			
	}

	
	return 0;
	
}
