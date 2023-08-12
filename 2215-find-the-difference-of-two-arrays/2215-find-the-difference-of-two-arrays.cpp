class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int, int> u1;
        unordered_map<int, int> u2;

        for (auto x : nums1) {
            u1[x]++;
        }

        for (auto y : nums2) {
            u2[y]++;
        }

        vector<int> temp1; // Renamed from temp to temp1
        for (auto x : nums1) {
            if (u2.find(x) == u2.end()) {
                u2[x]++;
                temp1.push_back(x);
            }
        }
        ans.push_back(temp1);

        vector<int> temp2;
        for (auto y : nums2) { // Renamed x to y for consistency
            if (u1.find(y) == u1.end()) {
                u1[y]++;
                temp2.push_back(y);
            }
        }
        ans.push_back(temp2);

        return ans;
    }
};