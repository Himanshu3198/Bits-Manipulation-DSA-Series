#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=1,k=2;
	cout<<bitset<8>(n)<<endl;
	n=n^(1<<(k-1));
	cout<<n<<" "<<bitset<8>(n)<<endl;
}
