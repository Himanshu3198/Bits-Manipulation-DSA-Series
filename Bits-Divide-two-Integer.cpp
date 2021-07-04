// 29. Divide Two Integers

class Solution {
public:
    
    
    /* the basic idea behind of apporach is to keep  incrementing divisor by multiple of two till it less or 
    equal to dividend and count how many times we have done this operation but increament count also in multiple of 2 . */
    
  
    int divide(int x, int y) {
     
if(x==INT_MIN and y==-1) return INT_MAX;
        
         int sign;
      
     
         sign= ((x>=0) and (y>=0))?1:-1;
        
          if(x<=0 and y<=0){
            sign=1;
        }
      
        long x1=labs(x),y1=labs(y),ans=0;
        
        
        
        while(x1>=y1){
            
            long m=1,temp=y1;
            
            
            while(temp<<1<=x1){
                
                temp=temp<<1;
                m=m<<1;
            }
            
            x1-=temp;
            ans+=m;
            
        }
        cout<<sign;
        return sign*ans;
        
    }
};
