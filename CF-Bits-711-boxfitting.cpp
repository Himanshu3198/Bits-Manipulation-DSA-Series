#include<bits/stdc++.h>
using namespace std;
int main(){


    int t=1;
    cin>>t;
    while(t--){


        int f[99];
        memset(f,0,sizeof(f));

        int n,m;
        cin>>n>>m;


        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            f[(int)log2(x)]++;
        }
   
       

        // for(int i=0;i<=8;i++){

        //     cout<<f[i]<<" ";
        // }
        // cout<<"\n";

        int ans=0,count=0;
        while(n){
               count=m;
            for(int i=20;i>=0;i--){

                while(f[i]&&count>=(1<<i)){
     
                         count=count-(1<<i);
                         f[i]--;
                           n--;
                      
                }
            
            }
                ans++;
                 
        }
        cout<<ans<<"\n";
    }
    return 0;
}