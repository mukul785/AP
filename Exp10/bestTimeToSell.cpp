class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int min=0,profit=0,max_profit=0;
            for(int i=1;i<prices.size();i++){
                if(prices[i]<prices[min]){
                    min=i;
                }
                else{
                    profit = prices[i]-prices[min];
                    max_profit= max(max_profit,profit);
                }
            }
            return max_profit;
        }
    };