#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define int long long
#define f first
#define s second
#define pb push_back
#define pr pair<int,int>
#define ld long double
const int mod=998244353;
const int MAX=200005;
#define ordered_set tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update>
struct segment_tree{
    vector<int>sgt;
    segment_tree(int n){
        sgt.resize(2*n);
    }
    void build(int n){
        for(int i=n-1;i>=1;i--){
            sgt[i]=min(sgt[2*i],sgt[2*i+1]);
        }
    }
    int query(int l, int r, int n){
        l+=n;
        r+=n;
        int sum=INT_MAX;
        while(l<=r)
        {
            if(l&1)
            {
                sum=min(sum,sgt[l]);
                l++;
            }
            if(!(r&1))
            {
                sum=min(sum,sgt[r]);
                r--;
            }
            l=l>>1;//l=l/2;
            r=r>>1;//r=r/2;
        }
        return sum;
    }

};

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==2){
            while(x){
                bool flag=false;
                for(int i=30;i>=0;i--){
                    if((1<<i)&arr[0]){
                        arr[0]=arr[0]^(1<<i);
                        arr[1]=arr[1]^(1<<i);
                        x--;
                        flag=true;
                        if(x==0)
                        break;
                    }
                }
                if(flag==false){
                    break;
                }
            }
            if(x&1){
                arr[0]=arr[0]^1;
                arr[1]=arr[1]^1;
            }
            cout<<arr[0]<<" "<<arr[1];
        }
        else{
            int store[31];
            memset(store,0,sizeof(store));
            int save=n-1;
                for(int i=0;i<n-1;i++){
                        save=i;
                    for(int bit=30;bit>=0;bit--){
                        if((1<<bit)&arr[i]){
                            if(store[bit]==1){
                                arr[i]=arr[i]^(1<<bit);
                                store[bit]=0;
                            }
                            else{
                                arr[i]=arr[i]^(1<<bit);
                                store[bit]=1;
                                x--;
                                if(x==0)
                                    break;
                            }
                        }
                    }
                    if(x==0)
                        break;
                }
            for(int i=0;i<31;i++){
                if(store[i]==1){
                    for(int j=save;j<n-1;j++){
                        if((1<<i)&arr[j]){
                        arr[j]=arr[j]^(1<<i);
                        store[i]=0;
                        break;
                        }
                    }
                }
            }
            for(int i=0;i<31;i++){
                if(store[i]==1){
                    arr[n-1]=arr[n-1]^(1<<i);
                }
            }
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
