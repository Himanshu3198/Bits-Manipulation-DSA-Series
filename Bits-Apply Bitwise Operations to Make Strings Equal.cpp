class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        
        int  oneS=0,zeroS=0,oneT=0,zeroT=0;
        for(int i=0;i<s.size();i++){
            
            oneS+=(s[i]=='1');
             oneT+=(target[i]=='1');
            zeroS+=(s[i]=='0');
            zeroT+=(target[i]=='0');
        }
        if(s==target) return true;
        // return ((oneS==oneT && zeroS==zeroT));
        oneT=oneS;
        string t=string(s.size(),'0');
        if(s==t || target==t) return false;
        for(int i=0;i<target.size();i++){
            
            if(target[i]==s[i]) continue;
            if(s[i]=='0' && target[i]=='1'){
                if(oneS>0 || oneT>0){
                    continue;
                }
                else return false;
            }
            else if(s[i]=='1' && target[i]=='0'){
                 if(oneS>1){
                    oneS--;
                    continue;
                }else if(zeroS>0) continue;
                else return false;
            }
        }
        return true;
    }
};
