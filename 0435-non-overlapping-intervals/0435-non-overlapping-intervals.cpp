class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        int p = intervals[0][1];
        int n=intervals.size();
        int ans=0;
        
        for(int i=1;i<n;i++){
            if(p>intervals[i][0]){
                ans++;
                p = min(p,intervals[i][1]);
            }
            else p = intervals[i][1];
            
            
        }
        return ans;
    }
};