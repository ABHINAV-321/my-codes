#include <iostream>
using namespace std;
int regNo; 
char name[15];
int malaMark,hindiMark , mathsMark,engMark,cheMark,phyMark;
float av;


void average(){
	av=(malaMark+hindiMark+mathsMark+engMark+cheMark+phyMark)/6;
	cout<<"average = "<<av<<endl;
	}
	
	
int main(){
	void average();
	
	cout<<"enter your name : ";
	cin>>name;
	cout<<"enter your register number : ";
	cin>>regNo;




	cout<<"enter your malayalam mark : "<<endl;
	cin>>malaMark;
	cout<<"enter your hindi mark : "<<endl;
	cin>>hindiMark;
	cout<<"enter your maths mark : "<<endl;
	cin>>mathsMark;
	cout<<"enter your english mark : "<<endl;
	cin>>engMark;
	cout<<"enter your chemistry mark : "<<endl;
	cin>>cheMark;
	cout<<"enter your physics mark : "<<endl;
	cin>>phyMark;



	average();
	
	}
