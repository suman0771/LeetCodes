class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxpro=0;
       int minVal=INT_MAX;
       for(int i=0;i<prices.size();i++){
           minVal=min(minVal,prices[i]);
           maxpro=max(maxpro, prices[i]-minVal);
       }
       return maxpro;
        
    }
};