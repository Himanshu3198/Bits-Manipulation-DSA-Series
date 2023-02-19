class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        
        int n=nums.size();
        set<int>bucket(nums.begin(),nums.end());
        int ans=1;
        while(1){
            if(!bucket.count(ans)) return ans;
            ans=ans<<1;
        }
        return 0;
        
    }
};
