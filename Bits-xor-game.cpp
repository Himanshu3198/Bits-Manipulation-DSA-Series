/* author :himanshu3198
   problem:codechef xor game
   */
#include<bits/stdc++.h>
#define ll long long int
#define fr(i,n) for(int i=0;i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)
#define fst first
#define snd second
#define E endl
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define setbits(x) __builtin_popcount(x)
#define  raftaar()    ios_base::sync_with_stdio(false); cin.tie(NULL);  
using namespace std;

int main(){

  raftaar();
  int t;
  cin>>t;
  while(t--){

      ll n;
        cin>>n;
       ll a[n],b[n];
     

       fr(i,n){
           cin>>a[i];
       }
       fr(i,n){
           cin>>b[i];
       } 
       int val=0;

       fr(i,n){
         val=val^a[i]^b[i];
        
       }


       vector<pair<int,int>>vec;

       fr(i,n){

           vec.push_back(mp((a[i]^val),i));
       }


       sort(all(vec));
       sort(b,b+n);
        bool flag=true;
      
       for(int i=0;i<n;i++){

        if(b[i]!=vec[i].first){
            flag=false;
            break;
        }
       }

       if(flag){
           fr(i,n){
               b[vec[i].second]=vec[i].first;
           }
           
           fr(i,n){
    
             cout<<b[i]<<" ";
               
           }
       }
       else{
           cout<<"-1\n";
       }

       cout<<"\n";



           
            

       }


  
}