//lc 199
//bascis, level order traversal
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<int>res;
        while(!q.empty()){
            int size=q.size();
            TreeNode* curr;
            for(int i=0;i<size;i++){
                 curr= q.front();
                q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);

            }
            res.push_back(curr->val);
        }
        return res;
    }
};
