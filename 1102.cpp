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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<TreeNode*> father, son;
        father.push_back(root);
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        else ans.push_back({root->val});
        vector<int> tmp;
        int cnt = 0;
        while(1){
            if(root->left != NULL){
                son.push_back(root->left);
                tmp.push_back(root->left->val);
            }
            if(root->right != NULL){
                son.push_back(root->right);
                tmp.push_back(root->right->val);
            }
            ++cnt;
            if(cnt == father.size()){
                father = son;
                cnt = 0;
                if(father.empty())
                    break;
                ans.push_back(tmp);
                son.clear();
                tmp.clear();
            }
            root = father[cnt];
        }
        return ans;
    }
};