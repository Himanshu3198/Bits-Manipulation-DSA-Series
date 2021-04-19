
// the idea behind approach is if we have even number then its no of set bit is equal to number of setbit of number/2 and for odd it would 1+ no. of setbit of number/2 therefore we store it in array so we need not to calculate it again and again.
// 338. Counting Bits

class Solution {
public:
    vector<int> countBits(int num) {

         vector<int>dp(num+1);
        
        dp[0]=0;
        
        for(int i=1;i<=num;i++){
            
           if(i%2==0){
               dp[i]= dp[i/2];
           }
            else{
               dp[i]=1+dp[i/2];
            }
        }
        
        return dp;
    }
};

// if you have still have doubt feel free to ask in comment section.
// happy coding
