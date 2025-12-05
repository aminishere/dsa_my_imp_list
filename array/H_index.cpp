class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();

        for(int h=n;h>=0;h--){
            int cnt=0;
            for(int i=0;i<n;i++){
                if(h<=citations[i]){
                    cnt++;                    
                }
                
            }
            if(cnt>=h)return h;
        }
        return 0;
    }
};

//key point : 
// 1. found h index range which is 0 to n.
// 2. ques asked max h index , so assumed h index the max one
//3. iterated the arr to find if this h has potential by checking the count how many individual citation are greater than our assumed one.
// 4. first one hit is our max h 

//yayy solved it, so much procastination for this ques  i did
//------------------------
//was asked in arcesium round-1 (2025)
