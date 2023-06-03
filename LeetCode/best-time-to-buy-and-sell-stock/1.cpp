// Approach-1: Iteration: One Pass
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size(), max = INT_MIN, maxProfit = 0;
        for(int i = size - 1; i>=0; --i) {
            if(max < prices[i]) max = prices[i];
            else if(max - prices[i] > maxProfit) maxProfit = max - prices[i];
        }

        return maxProfit;
    }
};
