class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>s;
        int maxprofit=0;
        s.push(prices[0]);
        for(int i=1;i<prices.size();i++){
            if( prices[i]<s.top()){
                s.pop();
                s.push(prices[i]);
            }
            else{
                int currprofit=prices[i]-s.top();
                maxprofit=max(currprofit,maxprofit);
            }

        }
        return maxprofit;
        
    }
};
