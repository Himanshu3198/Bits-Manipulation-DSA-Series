#include<bits/stdc++.h>
using namespace std;

#define bool int

bool isPowerOfTwo(int x)
{
    int a=x&(x-1);
    int b=(!(x&(x-1)));
    int c= x && (!(x&(x-1)));
    cout<<"this is a\t"<<a<<" ";
    cout<<"this is b\t"<<b<<" ";
    cout<<"this is c\t"<<c<<"\n";

    return x &&(!(x&(x-1)));
}

int main()
{
    isPowerOfTwo(0)?cout<<"yes\n":cout<<"No\n";
    isPowerOfTwo(3)?cout<<"yes\n":cout<<"No\n";

    // int d=5-5;
    // int e=(!d);
    // cout<<e<<"\n";
    return 0;
}