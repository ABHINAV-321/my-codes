#include <iostream>
#include <string>
using namespace std ;

int main (){
	string safe,userAgree,c;
	string findx(); 
    safe=findx();
    	if (safe=="true"){
		cout<<" to viwe 18+ contents type 'ok' or 'no'\n user :";
		cin>>userAgree;
		if(userAgree=="ok"){
			cout<<"\n ******************\n system : \n \t 1. bolbjob \n \t 2. anal sex \n \t 3. vaginal sex \n \t 4. tongue liking \n \t 5. sextoy \n \t 6. xnxx \n \t 7. porn hub \n \t 8. cutesex \n \t 9. hamster.porn\n \t10. nudesearch \n **********************"<<endl;
			}else{
				cout<<"ok"<<endl;
				}
		}else{
			cout<<"\n \n system : you are prohibited \n ******************* \n 18+ contents are there pls go back \n *******************"<<endl;
			}
			return 0;
	}
		


		
	
string findx(){
	int age;
	string safe="true";
	cout<<"system : enter your age to enter here: ";
	cin>>age;
	if (age>=18){
		safe="true";
		}else {
			safe="false";
			}
	return safe;
	}
	
