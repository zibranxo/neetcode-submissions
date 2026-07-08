class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX, profit=0;
        for(int price: prices){
            minp=min(minp, price);
            profit=max(profit, price-minp);
        }
        return profit;
    }
};
