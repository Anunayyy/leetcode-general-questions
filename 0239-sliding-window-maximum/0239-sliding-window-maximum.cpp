/*class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        int n=nums.size();
        if(n<k)return res.push_back(0);
        if(n==k) res.push_back(max(nums.begin(),nums.end()));
        for(int i=0;i+2<n;i++){
            priority_queue<int> pq;
            pq.push(nums[i]);
            pq.push(nums[i+1]);
            pq.push(nums[i+2]);
            res.push_back(pq.top());
            pq = priority_queue<int>();
            
            
        }
        return res;
       
        

        
    }
};*/
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        int n = nums.size();
        
        if (n < k) {
            return res;
        }
        
        priority_queue<pair<int, int>> pq;
        
        // Fill the initial window
        for (int i = 0; i < k; i++) {
            pq.push({nums[i], i});
        }
        
        res.push_back(pq.top().first);
        
        for (int i = k; i < n; i++) {
            // Remove elements that are outside the current window
            while (!pq.empty() && pq.top().second <= i - k) {
                pq.pop();
            }
            
            pq.push({nums[i], i});
            res.push_back(pq.top().first);
        }
        
        return res;
    }
};
