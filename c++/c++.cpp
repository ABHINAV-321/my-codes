#include<iostream>
#include <string> 
using namespace std;
class pattern{
	public:
	string str="*";
	int patrn(){
	int i, j;
	int limit=10;
	for (i=limit;i>=0;i--){
		for (j=0;j<=i;j++){
		//	for(j>=0){
				cout<<str;
				}
		//	}
			cout<<"\n";
		
		}
		return 0;
	 }	
	};
int main(){
	pattern p;
	p.patrn();
	return 0;
	}
