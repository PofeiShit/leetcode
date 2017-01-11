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
    int maxlevel = 0;
    void dfs(TreeNode* root, int l)
    {
        if(root == NULL){
            maxlevel = max(l, maxlevel);
            return ;
        }
        dfs(root->left, l + 1);
        dfs(root->right, l + 1);
    }
    int maxDepth(TreeNode* root) {
        dfs(root, 0);
        return maxlevel;
    }
};