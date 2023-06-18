class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        int i=0;
        int j=0;
        stack<int>s;
        
        while(i<r){
                s.push(matrix[i][j]);
                if(s.top()==target) return true;
                else if(j==c-1){
                    i++;
                    j=0;
                    } 
                else if(j!=c-1){
                    j++;
                }
                
        }
        return false;
        
    }
};