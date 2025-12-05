//keywords : topological , queue, indegree vector, map
//do bfs of indegree[i]==0 peeps 

class Solution {
public:
    bool topo(unordered_map<int, vector<int>>mp, vector<int>&indegree, int n){
        int cnt=0;
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
                cnt++;
            }
        }
        while(!q.empty()){
            int top= q.front();
            q.pop();
            for(auto it : mp[top]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                    cnt++;
                }
            }
        }

        return cnt==n;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>mp;
        vector<int>indegree(numCourses, 0);
        for(auto it : prerequisites ){
            int a= it[0], b=it[1];//b is dependent on a OR a->b
            mp[a].push_back(b);
            indegree[b]++;
        }
        return topo(mp, indegree, numCourses);
    }
};
