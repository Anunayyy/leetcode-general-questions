class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s="";
        int cnt=0;
        //if(a.find(b[0]==string::npos)) return -1;
        
        while(s.size()<b.size()){
            s+=a;
            cnt++;
        }
        if(s.find(b)!=string::npos) return cnt;
        
        s+=a;
        cnt++;
        
        if(s.find(b)!=string::npos) return cnt;
        
        return -1;
        
    }
};