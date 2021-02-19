#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=5,b=9;
cout << a << " " << bitset<8>(a) << " "<<b<<" "<<bitset<8>(b)<<"\n";
    cout<<(a&b)<<"\n";
    cout<<(a|b)<<"\n";
    cout<<(a^b)<<" \n";
    cout<<(~a)<<"\n";
     cout<<(b<<1)<<"\n";
     cout<<(b>>1)<<"\n";



       int n=90;
     int count=0;

     for(int i=7;i>=0;i--){
            // int x=(1<<i)&n;
            // // cout<<x<<" ";
            // cout<<( (1<<i)&n )<<"\n";

            if(n&(1<<i)){

            
                count++;
            }

            (n&(1<<i))?cout<<1:cout<<0;


     } 
     cout<<"\n";
     cout<<count<<"\n";

     return 0;
}