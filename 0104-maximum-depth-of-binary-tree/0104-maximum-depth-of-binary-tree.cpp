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
 *//*
class Solution {
public:
    void help(TreeNode* root,int level,vector<vector<int>>& res){
        if(root==NULL)return;
        if(level>=res.size())res.push_back({});
        res[level].push_back(root->val);
        help(root->left,level+1,res);
        help(root->right,level+1,res);
        
    }
    int maxDepth(TreeNode* root) {
        vector<vector<int>>res;
        help(root,0,res);
        return res.size();
        
    }
};*/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        
        return 1 + max(lh,rh);
        
        
        
        
    }
};