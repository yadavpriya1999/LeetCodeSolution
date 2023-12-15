class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> st;
        for(auto row:paths){
            st.insert(row[1]);
        }
        //checking if city available in set 
        for(auto row:paths){
            if(st.count(row[0])>0){
                st.erase(row[0]);
            }
        }
        //printing output
        for(string s:st){
            return s;
        }
        return "";
    }
};