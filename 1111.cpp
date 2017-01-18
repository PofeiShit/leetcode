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
    int min = 0x7fffffff;
    void dfs(TreeNode* root, int level){
        if(root == NULL) 
            return;
        if(root->left == NULL && root->right == NULL){
            min = level < min ? level : min;
            return;
        }
        dfs(root->left, level + 1);
        dfs(root->right, level + 1);
    }
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        dfs(root, 1);
        return min;
    }
};