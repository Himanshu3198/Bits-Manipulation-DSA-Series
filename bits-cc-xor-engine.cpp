/* author :himanshu3198
   problem:codechef xor engine  
   */
#include<bits/stdc++.h>
#define ll long long int
#define E endl
#define setbits(x) __builtin_popcount(x)
#define  raftaar()    ios_base::sync_with_stdio(false); cin.tie(NULL);  
using namespace std;

int main(){

  raftaar();
  int t;
  cin>>t;
  while(t--){

      ll n,q;
      cin>>n>>q;
       ll a[n];
       ll even=0,odd=0;
       for(int i=0;i<n;i++) {
           
           cin>>a[i];

           int check=setbits(a[i]);
           if(check%2==0){
               even++;

           }
           else{
               odd++;
           }

       }



       while(q--){


           ll p;
           cin>>p;

           ll x=setbits(p);

           if(x%2==0){

               cout<<even<<" "<<odd<<"\n";
           }
           else{
               cout<<odd<<" "<<even<<"\n";
           }
          


           
            

       }


  }
}