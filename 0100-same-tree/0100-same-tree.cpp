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
    private:
    bool Check_Same_Tree(TreeNode* r1, TreeNode* r2) {
        // base case
        if(r1 == NULL && r2 == NULL)
            return true;
        if(r1 == NULL && r2 != NULL || r2 == NULL && r1 != NULL)
            return false;
        
        bool left = Check_Same_Tree(r1->left, r2->left);
        bool right = Check_Same_Tree(r1->right, r2->right);

        if(left && right && r1->val == r2->val)
            return true;
        else
            return false;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return Check_Same_Tree(p,q);
    }
};