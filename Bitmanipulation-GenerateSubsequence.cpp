//  generate subsequence of string using bit manipulation
#include<bits/stdc++.h>
using namespace std;


int main(){

    string s;
    cin>>s;

    int n=s.length();

    int noOfSubsequence=(1<<n)-1;

    cout<<" "<<"\n";

    for(int i=1;i<=noOfSubsequence;i++){


        int temp=i,j=0;

        while (temp>0)
        {
            if(temp&1){
                cout<<s[j];
            }
            j++;
            temp=temp>>1;
        }
        cout<<"\n";
        
    }

    return 0;
}