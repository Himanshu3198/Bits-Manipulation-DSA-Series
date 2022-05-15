#include "bits/stdc++.h"
using namespace std;
int main(){
    int a=5,b=10;  
    cout<<"before swap "<<a<<" "<<b<<"\n";
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<a<<" "<<b<<"\n";
}
