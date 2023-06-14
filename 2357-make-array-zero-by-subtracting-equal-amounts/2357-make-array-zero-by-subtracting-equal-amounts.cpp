class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>set;
        for(auto x:nums){
            if(x!=0)set.insert(x);
        }
        return set.size();
        
    }
};

/* if you see properly it depends on how many non zero unique numbers are present in nums. because we will need to subtract them anyways*/