class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int s=0;
        int e=r*c-1;
        while(s<=e){
            int m=s+(e-s)/2;
            int v=matrix[m/c][m%c];
            if(target==v){
                return true;
            }
            else if(target<v){
                   e=m-1;
            }
            else{
                s=m+1;
            }
        }
        return false;
        
    }
};