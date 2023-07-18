/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *return -1;
 TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int help(TreeNode* root){
        if(root==NULL)return 0;
        
        int lh = help(root->left);
        if(lh==-1){
            return -1;
        }
        int rh = help(root->right);
        if(rh==-1){
            return -1;
            
        }
        if(abs(lh-rh)>1){
            return -1;
        }
        return 1 + max(rh,lh);
    }
    bool isBalanced(TreeNode* root) {
        return help(root)!=-1;
        
        
    }
};