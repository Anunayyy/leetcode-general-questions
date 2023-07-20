class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        
        for(auto x:asteroids){
            //now we only need to check for negative value and 3 cases for it
            while(!s.empty() && x<0 && s.top()>0){ 
                // case 1: if the next element is n=bigger that thetop of the stack
                if(abs(x)>s.top()){
                    s.pop();
                    
                }
                // case 2: if the next element is equal to the top of the stack
                else if(abs(x)==s.top()){
                    s.pop();
                    x=0;
                    break;
                }
                //case 3: if the next element is less than the top of the stack
                else{
                    x=0;
                }
            }
            // for any other ase we will directly reach here so we kept in mind everything while solving this question
            
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