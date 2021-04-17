#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main() 
{
	int big=pow(10,9)+7; 
	int tt;
	cin>>tt;
	while(tt--)
	{
		ll n,m,count=0;
		cin>>n;
		vector<ll>v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		m=v[0];
		for(int i=0;i<n;i++)
			m=m&v[i];
		for(int i=0;i<n;i++)
		{
			if(v[i]==m)
				count++;
		}

    
        
		if(count<2)
			{cout<<"0\n";continue;}
		m=(count*(count-1))%big;
	
		for(int i=1;i<=n-2;i++)
			m=(m*i)%big;
		cout<<m<<"\n";




	}

	return 0;
}