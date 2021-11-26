// print all submask of given mask
#include<bits/stdc++.h>
#define E "\n"
using namespace std;

   int calculateMask(string word) {
        int mask = 0;
        for (auto c : word) mask |= (1 << c-'a');
        // bitset<32> b(mask);
        // cout<<b<<endl;
        return mask;
    }
    
void solve(int n ,int findmask){

    int submask=n;

    while(submask){
        // cout<<submask<<"  "; 

        if(submask==findmask) {
            cout<<"yes"<<E;
        }
       submask=(submask-1)&n; 
    }
  cout<<E;

}

int main(){



    int n=5;
       int mask=calculateMask("abslute");
       cout<<mask<<E;

       int findmask=calculateMask("abrodyz");
     solve(mask,findmask);


    return 0;
}
