/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool ans = false;
    void dfs(TreeNode* root, int sum, int s){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            if(s + root->val == sum) ans = true;
            return;
        }
        dfs(root->left, sum, s + root->val);
        dfs(root->right, sum, s + root->val);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        dfs(root, sum, 0);
        return ans;
    }
};