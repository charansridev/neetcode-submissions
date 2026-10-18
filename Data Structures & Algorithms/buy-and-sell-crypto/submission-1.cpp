class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_diff = INT_MIN;
        int n = prices.size();
        int min_val = INT_MAX;
        for(int i = 0;i<n;i++){
            min_val = min(prices[i],min_val);
            max_diff = max(max_diff,prices[i] - min_val);
        }
        return max_diff;    
    }
};
