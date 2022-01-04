class Solution {
public:
    int bitwiseComplement(int n) {
        
   /* the is idea create a mask whoose bit opposite to number bit
   i.e n=13 1 1 0 1  
     mask=  1 1 1 1 
     do xor=0 0 1 0 final result  
         */
        
        int temp=1;
        
        
        while(temp<n){
            
            temp=(temp<<1)|1;
        }
        
        return temp^n;
        
    }
};
