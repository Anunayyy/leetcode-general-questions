class Solution {
public:
vector<int> solve(vector<int> &gifts,int n){
sort(gifts.begin(),gifts.end());
gifts[n-1] = sqrt(gifts[n-1]);
};
long long pickGifts(vector<int>& gifts, int k) {
int c=0;
int n=gifts.size();
while(c<=k){
solve(gifts,n);
c++;
}
int sum=0;
for(auto x:gifts){
sum = sum+ x;
}
return sum;
}
};