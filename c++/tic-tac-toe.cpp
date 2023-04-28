#include <iostream>
using namespace std ;
int main (){
	int value;
	void playerOne(int value);
	void playerTwo(int value);
	string r1=" 1 ",r2=" 2 ",r3=" 3 ",r4=" 4 ",r5=" 5 ",r6=" 6 ",r7=" 7 ",r8=" 8 ",r9=" 9 ";
	cout<<" ------------------------ \n |"<<r1<<"\t|"<<r2<<"\t|"<<r3<<"\t|\n";
	cout<<" ------------------------ \n |"<<r4<<"\t|"<<r5<<"\t|"<<r6<<"\t|\n";
	cout<<" ------------------------ \n |"<<r7<<"\t|"<<r8<<"\t|"<<r9<<"\t|\n ------------------------ "<<endl;
	cout<<"player one (x) enter postion number : ";
	cin>>value;
	playerOne(value);
	cout<<"player two (o) enter postion number : ";
	cin>>value;
	playerTwo(value);
	
	
	return 0;
	}
void playerOne(int vlaue){
	string r1=" 1 ",r2=" 2 ",r3=" 3 ",r4=" 4 ",r5=" 5 ",r6=" 6 ",r7=" 7 ",r8=" 8 ",r9=" 9 ";
	if (vlaue==1){
		r1=" x ";
		}else if(vlaue==2){
			r2=" x";
			}else if(vlaue==3){
				r3=" x";
				}else if(vlaue==4){
					r4=" x";
					}else if(vlaue==5){
						r5=" x";
						}else if(vlaue==6){
							r6=" x";
							}else if(vlaue==7){
								r7=" x";
								}else if(vlaue==8){
									r8=" x";
									}else if(vlaue==9){
										r9=" x";
										}
										
	cout<<" ------------------------ \n |"<<r1<<"\t|"<<r2<<"\t|"<<r3<<"\t|\n";
	cout<<" ------------------------ \n |"<<r4<<"\t|"<<r5<<"\t|"<<r6<<"\t|\n";
	cout<<" ------------------------ \n |"<<r7<<"\t|"<<r8<<"\t|"<<r9<<"\t|\n ------------------------ "<<endl;
	
	}

void playerTwo(int vlaue){
	string r1=" 1 ",r2=" 2 ",r3=" 3 ",r4=" 4 ",r5=" 5 ",r6=" 6 ",r7=" 7 ",r8=" 8 ",r9=" 9 ";
	if (vlaue==1){
		r1=" o ";
		}else if(vlaue==2){
			r2=" 0";
			}else if(vlaue==3){
				r3=" 0";
				}else if(vlaue==4){
					r4=" 0";
					}else if(vlaue==5){
						r5=" 0";
						}else if(vlaue==6){
							r6=" 0";
							}else if(vlaue==7){
								r7=" 0";
								}else if(vlaue==8){
									r8=" 0";
									}else if(vlaue==9){
										r9=" 0";
										}
										
	cout<<" ------------------------ \n |"<<r1<<"\t|"<<r2<<"\t|"<<r3<<"\t|\n";
	cout<<" ------------------------ \n |"<<r4<<"\t|"<<r5<<"\t|"<<r6<<"\t|\n";
	cout<<" ------------------------ \n |"<<r7<<"\t|"<<r8<<"\t|"<<r9<<"\t|\n ------------------------ "<<endl;
	
	}
	
	
