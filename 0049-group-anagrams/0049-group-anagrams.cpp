class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> stringMap;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string str=strs[i];
            sort(str.begin(),str.end());
            stringMap[str].push_back(strs[i]);
        }
        for(auto &x:stringMap){
            ans.push_back(x.second);
        }
        return ans;
    }
};