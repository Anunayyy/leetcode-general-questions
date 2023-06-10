class Solution {
public:
vector<vector<int>> merge(vector<vector<int>>& intervals) {
if(intervals.size()<=1) return intervals;
sort(intervals.begin(), intervals.end());
vector<vector<int>> output;
output.push_back(intervals[0]);
for(int i=1; i<intervals.size(); i++) {
if(output.back()[1] >= intervals[i][0]) output.back()[1] = max(output.back()[1] , intervals[i][1]);
else output.push_back(intervals[i]);
}
return output;
}
};
​
​
/*
here we made a vector to store all the answers. now we push the first array then we compare if the last element of the array in the vector is larger than the first element of the next array. if yes it merges. so we put the max or the two elecments and merge the array
*/
​
​