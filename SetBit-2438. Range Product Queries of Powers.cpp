
#define ll long long int
class Solution
{
    public:
        vector<int> productQueries(int n, vector<vector < int>> &queries)
        {
            vector<ll>bits;
            vector<int>res;
            int mod=1e9+7;
            for(int i=0;i<31;i++)
                if(n&(1<<i))  bits.push_back(1<<i);
            // for(auto it:bits) cout<<it<<" ";
            
            for(auto q:queries){
                
                ll curr=1;
                for(int i=q[0];i<=q[1];i++){
                    curr=(curr*bits[i])%mod;
                }
                res.push_back((int)curr);
            }
            
            return res;
        }
};
