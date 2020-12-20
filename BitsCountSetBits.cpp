#include<bits/stdc++.h>
#define ll unsigned int
using namespace std;
 ll setCountBits(int x){
 	ll count=0;
 	while(x!=0)
 	{
 		
 		x=x&(x-1);
 		count++;
	 }
	 return count;
 }
int main()
{
	ll n;
	cin>>n;
	cout<<setCountBits(n)<<endl;
}
