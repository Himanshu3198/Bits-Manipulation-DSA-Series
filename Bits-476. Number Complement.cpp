class Solution {
public:
    int findComplement(int num) {
        
        
          int res=0;
            long long temp=1;
           while(temp<=num){
               
               if((num&temp)==0){
                   
                   res=res|temp;
               }
               temp=temp<<1;
           }
        
        return res;
         
    }
};
