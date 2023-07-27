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
    void help(TreeNode* root,int level, vector<vector<int>>& res){
        if(root==NULL)return;
        if(level>=res.size())res.push_back({});
        res[level].push_back(root->val);
        help(root->left,level+1,res);
        help(root->right,level+1,res);
    }    
    
    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>res;
        help(root,0,res);
        
        for(int i=1;i<res.size();i=i+2){
            reverse(res[i].begin(),res[i].end());
        }
        
        return res;
        
    }
};