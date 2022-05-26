
// solution 1
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res=0;
        for(int i=0;i<=31;i++){
            if((1<<i)&n) res++;
        }
        return res;
    }
};

// solution 2
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
