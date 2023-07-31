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

/*
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& pro) {
        if(pro.empty())return nullptr;
        TreeNode* root = new TreeNode(pro[0]);
        
        vector<int>left;
        vector<int>right;
        
        if(pro.size()==1)return root;
        
        for(int i=0;i<pro.size();i++){
            if(pro[i]>pro[0]){
                right.push_back(pro[i]);
                
            }
            else left.push_back(pro[i]);
            
        }
        
        root->left = bstFromPreorder(left);
        root->right = bstFromPreorder(right);
        
        return root;
        
        
    }
};*/

class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.empty())
            return nullptr;

        TreeNode* root = new TreeNode(preorder[0]);

        if (preorder.size() == 1)
            return root;

        vector<int> left;
        vector<int> right;

        for (int i = 1; i < preorder.size(); i++) {
            if (preorder[i] < preorder[0])
                left.push_back(preorder[i]);
            else
                right.push_back(preorder[i]);
        }

        root->left = bstFromPreorder(left);
        root->right = bstFromPreorder(right);

        return root;
    }
};