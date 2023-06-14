#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int buy=prices[0],sell=0;
    for(int i=1;i<prices.size();i++)
    {
        //if(buy>prices[i])
        {
            buy=min(prices[i],buy);
            //sell=0;
        }
        //if(prices[i]>buy)
        {
            sell=max(sell,prices[i]-buy);
        }
    }
    return sell;
}