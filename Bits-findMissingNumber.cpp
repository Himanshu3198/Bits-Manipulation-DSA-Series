// 268. Missing Number

#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> nums={1,3,0};

    int xo=nums.size();

    for(int i=0;i<nums.size();i++){

        xo^=nums[i]^i;
    }
    cout<<xo<<"\n";
    return 0;
}