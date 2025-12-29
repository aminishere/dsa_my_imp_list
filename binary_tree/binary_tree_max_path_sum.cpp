//lc 124

class Solution {
public:
    int solve(TreeNode* root, int &res){
        if(!root)return 0;
        int l = solve(root->left, res);
        int r= solve(root->right, res);
        int o1 = root->val;
        int o2= root->val + max(l,r);
        int o3= root->val+l+r;
        res= max({res, o1,o2,o3});
        return max(o1,o2);
    }
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        solve(root, res);
        return res;
    }
};
