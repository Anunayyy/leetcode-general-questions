/*class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0, r = arr.size() - 1, mid;
        while (l < r) {
            mid = l + ((r-l)/2);
            if (arr[mid] < arr[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }
        return l;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1]) return i;
            
        }
        return -1;
    }
};*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
                return i;
            }
        }
        return -1;
    }
};
