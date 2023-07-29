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
    TreeNode* help(vector<int>& nums,int start,int end){
        if(start>end)return NULL;
        
        int mid=start + (end-start)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = help(nums, start,mid-1);
        node->right=help(nums,mid+1,end);
        
        return node;
        }
    
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)return NULL;
        return help(nums,0,nums.size()-1);
        
    }
};

/*
class Solution {
public:
     TreeNode* create(vector<int> nums,int start,int end){
        if(start>end)
            return NULL;
        int mid = (start+end)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = create(nums, start,mid-1);
        node->right= create(nums,mid +1,end);
        return node;
    }
   
   
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        return create(nums,0,nums.size()-1);
        
    }
};
*/