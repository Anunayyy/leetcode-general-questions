class Solution {
public:
    string countAndSay(int n,string s = "1") {
        if(n==1)return s;
        int i=0;
        int j;
        int len = s.size();
        string res="";
        
        while(i<len){
            j=i;
            
            while(i<len and s[i]==s[j]){
                i++;
            }
            res = res + to_string(i-j) + s[j];
        }
        return countAndSay(n-1,res);
        
        
        
        
    }
};