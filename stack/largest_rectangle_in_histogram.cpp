//lc 84
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int maxi=0;
        int n= heights.size();
        for(int i=0;i<n+1;i++){ //n+1? cuz we need to process whole array
            int curr= i==n? 0 : heights[i];
            while(!st.empty() and heights[st.top()]>curr){
                int h= heights[st.top()];
                st.pop();
                int l = st.empty() ? 0 : st.top()+1; // this also 
                int r= i-1;
                int w= r-l+1; //this is legit formula  for [l...r]
                maxi=max(maxi, h*w);
            }
            st.push(i);
        }
        return maxi;
    }
};
