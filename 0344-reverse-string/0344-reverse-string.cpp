class Solution {
public:
    void reverseS(vector<char> &s,int l,int r){
        if(l>=r) return;
        swap(s[l],s[r]);
            reverseS(s,l+1,r-1);
    }
    void reverseString(vector<char>& s) {
        int l=0;
        int r=s.size()-1;
       reverseS(s,l,r);
    }
};