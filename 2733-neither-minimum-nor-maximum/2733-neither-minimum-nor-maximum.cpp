class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()>2){
            return nums[1];
        }
        return -1;
    }
};