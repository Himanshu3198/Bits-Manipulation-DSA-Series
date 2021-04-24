371. Sum of Two Integers
class Solution {
public:
    int getSum(int a, int b) {
       unsigned a1=a,b1=b,carry=0,ans=0;
        
        
        while(b1!=0){
            
            ans=a1^b1;
            carry=(a1&b1)<<1;
            a1=ans;
            b1=carry;
        }
        return a1;
    }
};
