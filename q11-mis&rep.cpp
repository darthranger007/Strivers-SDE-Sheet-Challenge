#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> p;
	// Write your code here 
	unordered_map<int,int> m;
	int sum=0;
	for(auto it:arr)
	{
		m[it]++;
		sum+=it;
		if(m[it]>1)
		{
			sum-=it;
			p.second=it;
			
		}

	}
	int ch=n*(n+1)/2;
	p.first=ch-sum;
	return p;
}
