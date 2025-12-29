//lc 105
// preorder is creating root, inorder is defining child ranges
class Solution {
public:
    unordered_map<int,int>mp; //global for fast lookup
    int idx;

    TreeNode* helper(vector<int>&preorder, int start, int end){ // it means it build one subtree whose nodes lie in inorder[start … end]
        if(start>end)return NULL;
        int rootv= preorder[idx++];
        TreeNode* root = new TreeNode(rootv);
        int mid= mp[rootv];
        root->left= helper(preorder, start, mid-1);
        root->right= helper(preorder, mid+1, end);
        return root;
    }    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)mp[inorder[i]]=i;
        idx=0;
        return helper(preorder, 0, inorder.size()-1);
    }
};
