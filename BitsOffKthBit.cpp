#include<bits/stdc++.h>
#include<bitset>
using namespace std;
  int oFFBit(int n,int k)
  {
  	cout<<"before\t"<<bitset<8>(n) <<endl;
  	n=n&(~(1<<(k-1)));
  	cout<<"after\t"<<bitset<8>(n) <<endl;
  	return n;
  	
  }


 int main()
 {
 	int n,k;
 	cin>>n>>k;
 	
 	cout<<oFFBit(n,k)<<endl;
 }
