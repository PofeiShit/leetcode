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
    bool isSym = true;
    void dfs(TreeNode* p, TreeNode* q)
    {
        if(isSym){
            if(p == NULL && q == NULL)
                return ;
            else if(p != NULL && q != NULL){
                if(p->val != q->val){
                    isSym = false;
                    return ;
                }
            } else {
                isSym = false;
                return ;
            }
            dfs(p->left, q->right);
            dfs(p->right, q->left);
        }
    }
    bool isSymmetric(TreeNode* root) {
        dfs(root, root);
        return isSym;
    }
};