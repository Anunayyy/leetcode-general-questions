class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        
        for(auto x:asteroids){
            while(!s.empty() && x<0 && s.top()>0){
                if(abs(x)>s.top()){
                    s.pop();
                    
                }
                else if(abs(x)==s.top()){
                    s.pop();
                    x=0;
                    break;
                }
                else{
                    x=0;
                }
            }
            
            if(x!=0){
                s.push(x);
            }
        }
        vector<int> res(s.size());
        for(int i = s.size()-1;i>=0;i--){
            res[i]=s.top();
            s.pop();
        }
        
        return res;
            
        }
        
    
};