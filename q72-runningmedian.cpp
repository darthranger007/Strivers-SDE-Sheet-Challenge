#include <bits/stdc++.h>
void findMedian(int *arr, int n)
{
    // Write your code here
    priority_queue<int> pq;
	priority_queue<int,vector<int>,greater<int>> pqmin;
	vector<int> ans;
	for(int i=0;i<n;i++)
	{
		
		if(!pq.empty() && pq.top()>arr[i])
		{
			pq.push(arr[i]);
		

		if(pq.size()-pqmin.size()>1)
		{
			pqmin.push(pq.top());
			pq.pop();
		}
		}
		else {
			pqmin.push(arr[i]);

		if(pqmin.size()-pq.size()>1)
		{
			pq.push(pqmin.top());
			pqmin.pop();
		}

		}
		if((i+1)%2==1)
		{
			if(pqmin.size()>pq.size())
			ans.push_back(pqmin.top());
			else ans.push_back(pq.top());
		}
		else{
			int an=pqmin.top()+pq.top();
			ans.push_back(an/2);
		}	
		}
		for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
}