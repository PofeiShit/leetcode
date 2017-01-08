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
    bool isSameTree(TreeNode* p, TreeNode* q) {
       if(p != NULL && q != NULL)
            return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        return p == NULL && q == NULL;
    }
};



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
    bool isSame = true;
    void dfs(TreeNode* p, TreeNode* q)
    {
        if(p == NULL && q == NULL) 
            return;
        else if(p != NULL && q != NULL){
            if(p->val != q->val){
                isSame = false;
                return ;
            }
        } else {
            isSame = false;
            return ;
        }
        if(isSame){
            dfs(p->left, q->left);
            dfs(p->right, q->right);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        dfs(p, q);
        return isSame;
    }
};