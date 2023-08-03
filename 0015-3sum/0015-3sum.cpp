class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int j=i+1;
            int k=n-1;
            int target=-nums[i];
            while(j<k){
                if(nums[j]+nums[k]==target){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(nums[j]+nums[k]<target){
                    j++;
                }else{
                    k--;
                }
            }
        }
        vector<vector<int>> v;
        for(auto &i:s){
            v.push_back(i);
        }
       return v; 
    }
};