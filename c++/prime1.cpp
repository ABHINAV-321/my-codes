#include <iostream>
using namespace std;
int isprime(int num){
   if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++){
      if (num % i == 0)
         { return 0; }
   }
   return 1; //if both failed then num is prime
}
int countPrimes(int strt,int end){
   int count=0;
   for(int i=strt;i<=end;i++){
      if(isprime(i)==1)
         { //cout<<count<<" ";
			 count++; }
   }
   //cout<<count<<" ";
   return count;
}
int main(){
   int START=10, END=200;
   cout <<endl<<"Primes in Ranges : "<<countPrimes(START,END);
   cout<<endl;
   return 0;
}
