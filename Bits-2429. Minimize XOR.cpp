class Solution {
public:
    int minimizeXor(int num1, int num2) {
        
        
        int totBits=__builtin_popcount(num2);
        int ans=0;
        for(int i=31;i>=0 && totBits>0;i--){
            if((1<<i)&num1){
                ans+=pow(2,i);
                totBits--;
            }
        }
        if(totBits>0){
            for(int i=0;i<31 &&totBits>0;i++){
                if((num1&(1<<i))==0){
                ans+=pow(2,i);
                totBits--;
                }   
            }
        }
        return ans;
        
    }
};
