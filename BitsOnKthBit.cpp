#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<bitset<8>(n)<<endl;

	n=n|(1<<(k-1));
	cout<<bitset<8>(n)<<endl;
	cout<<n<<endl;
}
