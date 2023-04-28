#include <iostream>
using namespace std;
int length,bredth,radius;
const int pi=3.12;
char aUnit[] ="cm^2";
char pUnit[] ="cm";
int main (){
	cout<<"enter length of rectangle : ";
	cin>>length;
	cout<<"enter bredth of rectangle : ";
	cin>>bredth;
	int area=length*bredth;
	int perimeter=2*(length+bredth);
	cout<<"\n\n    area & perimeter of rectangle      \n\narea of rectangle :"<<area<<aUnit<<endl;
	cout<<"perimeter of rectangle : "<<perimeter<<pUnit<<endl;
	 
	 
	 
	cout<<"\n\nenter radius of circle : ";
	cin>>radius; 
	area=pi*radius*radius;
	perimeter=2*pi*radius;
	cout<<"\n\narea of circle = "<<area<<aUnit<<"\n"<<"perimeter of circle = "<<perimeter<<pUnit<<endl;
	}
	
