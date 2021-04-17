#include<bits/stdc++.h>
using namespace std;

int main(){


    vector<int> nums={4,1,2,1,2};

    int n=nums.size();

    int xo=nums[0];
    for(int i=1;i<n;i++){
        xo=xo^nums[i];
    }

    cout<<xo<<"\n";
}