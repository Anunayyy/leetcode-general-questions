/*class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        int n = a.size();
        s.push(a[0]);
        for(int i=1;i<n;i++){
            if(s.top()<0){
                s.push(a[i]);
                }
            else if(s.empty()){
                s.push(a[i]);
            }
            else if(s.top()>0 and a[i]<0 and s.top()<abs(a[i])){
                s.pop();
            }
            else if(s.top()>0 and a[i]<0 and s.top()==abs(a[i])){
                s.pop();
                i++;
            }
            else if (s.top()>0 and a[i]<0 and s.top()>abs(a[i]))i++;
        }
        vector<int>res;
        int x = s.size();
        for(int i=x-1;i>=0;i--){
            res.push_back(s.top());
            s.pop();
            
            
        }
        return res;
                                                           
        
    }
};*/
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        
        for (int asteroid : asteroids) {
            bool destroyed = false;
            
            while (!s.empty() && asteroid < 0 && s.top() > 0) {
                if (s.top() < abs(asteroid)) {
                    s.pop();
                }
                else if (s.top() == abs(asteroid)) {
                    s.pop();
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;
                    break;
                }
            }
            
            if (!destroyed) {
                s.push(asteroid);
            }
        }
        
        vector<int> res;
        while (!s.empty()) {
            res.insert(res.begin(), s.top());
            s.pop();
        }
        
        return res;
    }
};
