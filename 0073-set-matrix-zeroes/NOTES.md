class Solution {
public:
void setZeroes(vector<vector<int>>& matrix) {
int m = matrix.size();  // row size
int n = matrix[0].size(); // col size
unordered_set<int>set_row;
unordered_set<int>set_col;
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
if(matrix[i][j]==0){
set_row.insert(i);
set_col.insert(j);
}
}
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
if(set_row.count(i)>0 || set_col.count(j)>0) matrix[i][j]=0;
}
}
}
};
//another approach
/*
class Solution {
public:
void setrow(vector<vector<int>>& matrix,int i,int n,int m){
for(int j=0;j<n;j++){
if(matrix[i][j]!=0){
matrix[i][j]=-1;
}
}
}
void setcol(vector<vector<int>>& matrix,int n,int m,int j){
for(int i=0;i<m;i++){
if(matrix[i][j]!=0){
matrix[i][j]=-1;
}
}