class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minprice = INT_MAX;
        int maxi = 0;
        
        for(int i=0;i<prices.size();i++)
        {
            minprice = min(minprice,prices[i]);
            maxi = max(maxi,prices[i]-minprice);
        }
        
        return maxi;
        
    }
};