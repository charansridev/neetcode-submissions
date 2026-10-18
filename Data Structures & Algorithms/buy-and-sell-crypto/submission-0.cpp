class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_diff = INT_MIN;
        int n = prices.size();
        for(int i = 0;i<n;i++) for(int j = i+1;j<n;j++){
            max_diff = max(max_diff,prices[j] - prices[i]);
        }
        return (max_diff >= 0 ? max_diff : 0);
    
    }
};
