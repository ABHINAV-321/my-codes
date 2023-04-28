#include <iostream>
using namespace std;
class operations {
	public:
int add(int num1,int num2 ){
	int sum=num1+num2;
	cout<<"sum = "<<sum<<endl;
	return 0;
	}
int sub(int num1, int num2){
	int s= num1-num2;
	cout<<"difference = "<<s<<endl;
	return 0;
	}
int multi(int num1, int num2){
	int s=num1*num2;
	cout<<"product = "<<s<<endl;
	return 0;
	}


	float divi(float num1, float num2){
	float s=num1/num2;
	cout<<"divided ans = "<<s<<endl;
	return 0;
    }
};
int main(){
	operations obj; 
	int num1,num2;
	int opp;
	cout<<"enter the caculation number \n 1. addition \n 2. substraction \n 3. multiplication \n 4. division \n";
	cin>>opp;
	cout<<"enter two numbers : ";
	cin>>num1>>num2;
	if (opp==1){
		obj.add(num1,num2);
		}
		else if (opp==2){
			obj.sub(num1,num2);
			}
			else if (opp==3){
				obj.multi(num1,num2);
					}
					else if (opp==4){
						obj.divi(num1,num2);
						}
				
			return 0;
		}
