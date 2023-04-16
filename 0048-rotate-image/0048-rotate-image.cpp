class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
		// we first make the transpose of the matrix
        int n = matrix.size();
        for(int i=0; i<n; ++i) {
            for(int j=i; j<n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; ++i) {
		// we then using the 2 pointer approach swap the columns. it is really easy to imagine of you use a 3x3 matrix in your mind. even a 4x4 is easy.
            int left = 0, right = n-1;
            while(left < right) {
                swap(matrix[i][left], matrix[i][right]);
                ++left;
                --right;
            }
        }
        
    }
};