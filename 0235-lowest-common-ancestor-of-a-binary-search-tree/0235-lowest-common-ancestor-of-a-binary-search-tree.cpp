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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int x = root->val;
        int y = p->val;
        int z = q->val;
        
        if(y<x && z<x)return lowestCommonAncestor(root->left,p,q);
        
        else if(y>x && z>x)return lowestCommonAncestor(root->right,p,q);
        
        else return root;
        
    }
};