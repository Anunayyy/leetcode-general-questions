// class Solution {
// public:
    
    /* recursion
    
    int help(string text1,string text2,int a,int b){
        if(a==0 || b==0)return 0;
        
        if(text1[a-1]==text2[b-1]){
            return 1 + help(text1,text2,a-1,b-1);
            
        }
        else return max(help(text1,text2,a-1,b),help(text1,text2,a,b-1));
    
}*/
    
    
    
    
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int a = text1.size();
        int b = text2.size();
        vector<vector<int>> t(a + 1, vector<int>(b + 1, -1)); // Adjust the size of the 2D vector
        
        return help(text1, text2, a, b, t);
    }

    int help(string& text1, string& text2, int a, int b, vector<vector<int>>& t) {
        if (a == 0 || b == 0)
            return 0;

        if (t[a][b] != -1)
            return t[a][b];

        if (text1[a - 1] == text2[b - 1]) {
            t[a][b] = 1 + help(text1, text2, a - 1, b - 1, t);
        } else {
            t[a][b] = max(help(text1, text2, a - 1, b, t), help(text1, text2, a, b - 1, t));
        }

        return t[a][b];
    }
};