//lc 637
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<double>res;
        while(!q.empty()){
            int size= q.size();
            double sum =0;
            for(int i=0;i<size;i++){
                TreeNode* curr= q.front();
                q.pop();
                sum+=(double)curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            res.push_back(sum/size);
        }
        return res;
    }
};
