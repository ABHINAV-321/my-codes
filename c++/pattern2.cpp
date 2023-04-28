#include<iostream>
#include <string> 
using namespace std;
class pattern{
	public:
	string str="*";
	int patrn(){
	int i, j;
	int limit=10;
	for (i=0;i<=limit;i++){
		for (j=0;j<=i;j++){
			//for(j<=i){
				cout<<str;
				}
			//}
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
