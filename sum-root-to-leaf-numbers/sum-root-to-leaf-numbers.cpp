/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    void dfs(TreeNode* node,string s ){
        if(node==NULL){
            return ;
        }
        s=s+to_string(node->val);
        
        if(node->left==NULL && node->right==NULL){
            ans+=stoi(s);
        }
        
        dfs(node->left,s);
        dfs(node->right,s);
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL){
            return ans;
        }
        string s=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            ans+=stoi(s);
            return ans;
        }
        dfs(root->left,s);
        dfs(root->right,s);
        return ans;
    }
};