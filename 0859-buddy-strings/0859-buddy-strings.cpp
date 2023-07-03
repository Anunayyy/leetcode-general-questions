class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int cnt=0;
        vector<int>v;
        vector<int>fre(26,0);
        
        if(s.size()!=goal.size())return false;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                cnt++;
                v.push_back(i);
            }
            fre[s[i]-'a']++;
        }
        
        bool flag=false;
        for(int i=0;i<26;i++){
            if(fre[i]>=2){
                flag=true;
                break;
            }
            
        }
        if(cnt==0 and flag==true)return true;
        if(cnt==0 and flag==false)return false;
        if(cnt==1 or cnt>2) return false;
        if(s[v[0]]==goal[v[1]] and s[v[1]]==goal[v[0]]) return true;
        
        return false;
        
        
    }
};