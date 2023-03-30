class Solution {
public:
    int getNum(char c) {
        switch(c) {
            case 'M':
                return 1000;
            case 'D':
                return 500;
            case 'C':
                return 100;
            case 'L':
                return 50;
            case 'X':
                return 10;
            case 'V':
                return 5;
            case 'I':
                return 1;
        }
        return -1;
    }
    int romanToInt(string s) {
        int res = 0;
        for(int i = 0; i < s.size(); i++) {
            if(getNum(s[i]) < getNum(s[i+1])) {
                res -= getNum(s[i]);
            }
            else {
                res += getNum(s[i]);
            }
        }
        return res;
    }
};