class Solution {
public:
    int maxProfit(vector<int>& prices) {  
        int p1 = 0, p2 = 0;
        
        int min1 = INT_MAX, max1 = INT_MIN;
        
        vector<int>b, a(prices.size());
        
        for(auto p : prices)
        {
            min1 = min(min1, p);
            p1 = max(p1, p - min1);
            b.push_back(p1);
        }
        
        for(int i=prices.size()-1; i>=0; i--)
        {
            max1 = max(max1, prices[i]);
            p2 = max(p2, max1 - prices[i]);
            a[i]=p2;
        }
        
        int ans=0;
        
        for(int i=0; i<a.size(); i++)
            ans = max(ans, b[i] + a[i]);
        
        return ans;
        
    }
};