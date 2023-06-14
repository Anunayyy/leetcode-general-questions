class Solution {
public:
    
    long long pickGifts(vector<int>& gifts, int k) {
        int c=0;
        int n=gifts.size();
        while(c<k){
            sort(gifts.begin(),gifts.end());
            gifts[n-1] = floor(sqrt(gifts[n-1]));
            c++;
        }
        long long sum=0;
        for(auto x:gifts){
            sum = sum + x;
        }
        return sum;
        
    }
};