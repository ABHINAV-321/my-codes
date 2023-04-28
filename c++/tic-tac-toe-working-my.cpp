#include <iostream>
using namespace std;

char bord[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
bool gameOver=false;
char currentPlayer = 'X';

void drawBoard(){
	int i,j;
	for(i=0;i<=2;i++){
		cout<<"\n --------------- \n";
		for(j=0;j<=2;j++){
			cout<<" |  ";
			cout<<bord[i][j];
			}
			
		cout<<" | ";
		}
		cout<<endl;
	}


void switchPlayer(){
	if(currentPlayer=='X'){
		currentPlayer='O';
		}else {
			currentPlayer='X';
			}
	
	}
	
	
	
void marker(){
	int raw,col;
	raw=(choice-1)/3;
	col=(choice-1)%3;
	if (bord[raw][col]=='X'||bord[raw][col]=='O'){
		cout<<"please choose correct place \n alredy filled !!!";
		switchPlayer();
		}
	bord[raw][col]=currentPlayer;
	
	}
	
void checkForWin(){
	int i;
	for(i=0;i<=2;i++){
		if (bord[i][0]==bord[i][1] && bord[i][0]==bord[i][2] ){
			cout<<currentPlayer<<" is the winner !!!"<<endl;
			gameOver=true;
			}
			
		else if (bord[0][i]==bord[1][i] && bord[0][i]==bord[2][i] ){
			cout<<currentPlayer<<" is the winner !!!"<<endl;
			gameOver=true;
			}
			else if (bord[0][0]==bord[1][1] && bord[2][2]==bord[0][0]){
				 cout<<currentPlayer<<" is the winner !!!"<<endl;
			     gameOver=true;
				}
				else if (bord[0][2]==bord[1][1] && bord[2][0]==bord[0][2]){
				      cout<<currentPlayer<<" is the winner !!!"<<endl;
			          gameOver=true;
				}
				
		}
	
    }
	

int main(){
	void checkForWin();
    void drawBoard();
    void switchPlayer();
    void marker();
	drawBoard();
	while(gameOver==false){
		cout<<currentPlayer<<" ,enter your choice : ";
		cin>>choice;
		marker();
		drawBoard();
		checkForWin();
		switchPlayer();
		}
	
	return 0;
	} 
