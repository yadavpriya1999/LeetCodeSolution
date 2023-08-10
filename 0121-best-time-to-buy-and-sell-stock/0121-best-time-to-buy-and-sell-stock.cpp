class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP=INT_MAX;
        int maxPro=0;
        for(int i=0;i<prices.size();i++){
          minP=min(minP,prices[i]);
          maxPro=max(maxPro,prices[i]-minP);
            
        }
        return maxPro;
    }
};