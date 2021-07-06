// 1829. Maximum XOR for Each Query


class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        
        int n=nums.size();
        vector<int>bits(n);
        
        bits[0]=nums[0];
        
        
        for(int i=1;i<n;i++){
            
            bits[i]=bits[i-1]^nums[i];
        }
        vector<int>res;
        for(int i=0;i<n;i++){
            
            int total=0;
            
            for(int j=0;j<maximumBit;j++){
                
                if((1<<j)&bits[i]) {
                    
                }
                else{
                    total+=(1<<j);
                }
            }
            
            res.push_back(total);
        }
        reverse(res.begin(),res.end());
        return res;
    }
        
};
