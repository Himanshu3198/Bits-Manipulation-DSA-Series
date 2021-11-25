//  Generate number from bits in c++
#include<bits/stdc++.h>
using namespace std;

int main(){



    int n=6;
    
    int i=0;
   int ans=0;
    while(n>0){

     
        if(n&1){
          ans+=pow(2,i);
        }
        i++;
        n=n>>1;
    }

    cout<<ans<<"\n";
    return 0;
}