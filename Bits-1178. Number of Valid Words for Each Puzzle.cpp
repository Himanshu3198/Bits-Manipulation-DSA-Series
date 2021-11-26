class Solution {
public:
    //TC O(n*50 + m*128)
    //SC O(n)
    int calculateMask(string word) {
        int mask = 0;
        for (auto c : word) mask |= (1 << c-'a');
        // bitset<32> b(mask);
        // cout<<b<<endl;
        return mask;
    }
    
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        unordered_map<int, int> mask_freq;
        //n =word.size(), m=puzzle.size()
        for (auto w : words) mask_freq[(calculateMask(w))]++;
        
        vector<int> ans;
        for (auto p : puzzles) { //O(10^4)
            int mask = calculateMask(p), submask = mask, first = (1 << p[0]-'a'), curr=0;
            
            //we are iterating thorugh all of the submasks of given mask
            while (submask) {  //O(2^7) =O(128)
                if (submask & first) {
                    curr += mask_freq[submask];
                }
                
                submask = (submask-1) & mask;
            }
            
            ans.push_back(curr);
        }
        return ans;
    }
};


