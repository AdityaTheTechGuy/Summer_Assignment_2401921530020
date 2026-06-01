#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int BestBuy = prices[0];
        int maxprofit = 0;

        for(int i = 0; i<prices.size();i++){
            if(prices[i] > BestBuy ){
                maxprofit = max(maxprofit,prices[i] - BestBuy);
            }
            BestBuy = min(prices[i],BestBuy);
        }
        return maxprofit;
    }
};