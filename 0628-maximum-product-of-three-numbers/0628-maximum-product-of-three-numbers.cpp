class Solution {
public:
    int maximumProduct(vector<int>& a) {
        
        //first we sort
        sort(a.begin(),a.end());
        int n=a.size();
        
        // now we can think of 3 possibilities.
        // 1. the product of the last 3 elemts would yeild the desired result
        //2. if the first 2 elemetns are negative and the multiplication can cancel each other with the 3rd element...i.e possibly positive or
        // 3. the first 2 elements which are negative and the the last element with is possibly positive could yeild the result.
        return max(a[n-1]*a[n-2]*a[n-3],max(a[0]*a[1]*a[2],a[0]*a[1]*a[n-1]));
        
    }
};