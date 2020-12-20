// write a program to find nos. of bits need to flip to convert number a to b.
#include<bits/stdc++.h>
using namespace std;

    int CountSetBits(int n){
         int count=0;
         while(n>0){
           
             n=n&(n-1);
               count++;
         }
         return count;
    }

   int FlippedBits(int a,int b){
       return CountSetBits(a^b);
   }

int main(){

    int a=7,b=10;
    cout<<FlippedBits(a,b)<<"\n";
}