// 137. Single Number II

class Solution {
public:
    
  
    int singleNumber(vector<int>& nums) {
        
        
          
         int n=nums.size();
        
          int count=0;
          unsigned res=0,shift=1;
        
          int ans=0;
        
        
        for(int i=0;i<32;i++){
            count=0;
            for(auto  num:nums){
                
                if(num&shift){
                    
                    count+=1;
                }
                
                
            }
            
            if(count%3!=0){
               res+=shift;
            }
          
            shift=shift*2;
            
        }
//         solve(nums)
        return res;
        
    
      
    }
};


// method 2
  int solve(vector<int>&nums){
          
          
          int n=nums.size();
          
            int one=0,two=0;
          
          
             for(auto num:nums){
                 
                 
                 one=(one^num)&(~two);
                 
                 two=(two^num)&(~one);
             }
          
          return one;
      }
