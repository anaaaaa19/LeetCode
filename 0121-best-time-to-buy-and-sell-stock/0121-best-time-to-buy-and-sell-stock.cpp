class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0];
        int maxp = 0;
        for(int i = 1; i<prices.size();i++){
            minp = min(minp,prices[i]);
            int profit = prices[i] - minp;
            maxp = max(maxp,profit);

        }
        return maxp;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna