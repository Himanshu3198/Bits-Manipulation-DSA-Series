// time complexity O(n*2^n)
#include<bits/stdc++.h>
using namespace std;


    vector<vector<int>> subsets(vector<int>& num) {
       int size=num.size();
    int subsetNum=(1<<size);
    vector<vector<int> >allSubsets;
    for(int subsetMask=0;subsetMask<subsetNum;++subsetMask){
        vector<int>subset;
        for(int i=0;i<size;++i){
            if((subsetMask & (1<<i))!=0)
                
            {
                subset.push_back(num[i]);
            }
             
        }
        allSubsets.push_back(subset);
    }

    return allSubsets;   
    }


int main(){
    vector<int> v{1,2,3};

    vector<vector<int>>ans=subsets(v);
    for(auto &v:ans){
      
        for(int &u:v){
            cout<<"["<<u<<"]";
        }
        cout<<" ";
    }
    
}
