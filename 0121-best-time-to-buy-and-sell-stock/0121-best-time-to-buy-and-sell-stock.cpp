class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxi=0;
    int mini=prices[0];
    int cost;
    for(int i=0;i<prices.size();i++)
    {
        cost=prices[i]-mini;
        maxi=max(maxi,cost);
        mini=min(mini,prices[i]);
    }
    return maxi;
    }
};