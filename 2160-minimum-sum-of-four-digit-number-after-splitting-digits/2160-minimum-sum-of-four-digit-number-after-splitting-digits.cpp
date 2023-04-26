class Solution {
public:
    int minimumSum(int num) {
        vector<int>dig(4,0);
        for(int i=0;i<4;i++){
            dig[i]=num%10;
            num = num/10;
        }
        sort(dig.begin(),dig.end());
        return min((dig[0]*10+dig[2])+(dig[1]*10+dig[3]),(dig[1]*10+dig[2])+(dig[0]*10+dig[3]));
        
    }
};