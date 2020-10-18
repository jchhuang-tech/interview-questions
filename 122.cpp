class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = -1;
        int sum = 0;
        prices.push_back(-1);
        for(int i=0; i<prices.size()-1; i++){
            if(prices[i]<prices[i+1] && buyPrice==-1){//buy
                buyPrice = prices[i];
            } else if(prices[i]>=prices[i+1] && buyPrice!=-1){//sell
                sum += prices[i] - buyPrice;
                buyPrice = -1;
            }
        }
        prices.pop_back();
        return sum;
    }
};
