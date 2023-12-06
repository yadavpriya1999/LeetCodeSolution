class Solution {
public:
    int totalMoney(int n) {
       int wc=n/7;
        int rd=n%7;
       int t= ((wc*(wc-1))/2)*7;
        t+=wc*28;
        t+=((rd*(rd+1))/2)+(wc*rd);
        return t;
    }
};