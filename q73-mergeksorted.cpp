#include <bits/stdc++.h> 
priority_queue<int,vector<int>,greater<int>> pq;
vector<int> mergeKSortedArrays(vector<vector<int>>&arr, int k)
{
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            pq.push(arr[i][j]);
        }
    }
    vector<int> ans;
    //for(int i=0;i<pq.size();i++)
    while(!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
    // Write your code here. 
}
