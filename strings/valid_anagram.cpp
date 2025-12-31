//lc 242
//freq matters
class Solution {
public:
    bool isAnagram(string s, string t) {
        int nt= t.size();
        int st= s.size();
        if(nt!=st)return false;
        vector<int>freq(26);
        for(auto it: s){
            freq[it-'a']++;
        }
        for(auto it: t){
            freq[it-'a']--;
            if(freq[it-'a']<0)return false;
        }
        return true;
    }
};
