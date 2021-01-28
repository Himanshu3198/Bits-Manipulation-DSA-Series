#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n=16;
	int s=n&(n-1);
	cout<<s<<"\n";
	if(s==0){
		cout<<"yes power of 2\n";
	}
	else if(s==1){
		cout<<"no its not power of 2\n";
	}
}
