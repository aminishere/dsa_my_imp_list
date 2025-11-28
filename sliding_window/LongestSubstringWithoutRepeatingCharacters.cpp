class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mini=0;
        int n=s.length();
        int i=0,j=0;
        unordered_map<char,int>window;
        while(j<n){
            char curr= s[j];
            window[curr]++;
            while(window[curr]>1){
                char prev= s[i];
                window[prev]--;
                i++;
            }
            mini=max(mini, j-i+1);
            j++;
        }
        return mini;
    }
};
