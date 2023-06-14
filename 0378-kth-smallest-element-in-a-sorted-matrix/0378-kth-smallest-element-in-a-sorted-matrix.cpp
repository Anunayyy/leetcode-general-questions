class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                pq.push(matrix[i][j]);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top();
        
    }
};

/*
here we add the elements to a max heap. it the size of the heap gets more than k then it pops the elments. at the end only k elements are present in the heap*/

//using a vector
/*
class Solution {
public:
        int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};*/

