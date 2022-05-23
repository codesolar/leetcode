class Solution {
    public int maxProfit(int[] prices) {
       int max_profit=0,min=prices[0],s=0;
        for(int i=0;i<prices.length;i++){
            if(min>prices[i]){
                min=prices[i];
            }
            else if(prices[i]-min>max_profit){
                max_profit=prices[i]-min;
            }
        }
        return max_profit;
    }
}