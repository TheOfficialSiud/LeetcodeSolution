class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root->val == 0) return false;
        if(root->val == 1) return true;
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);
        return root->val == 2 ? left | right : left & right;
    }
};