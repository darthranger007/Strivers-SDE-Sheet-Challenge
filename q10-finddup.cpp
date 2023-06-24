#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int,int> m;
	for(auto it:arr)
	{
		m[it]++;
		if(m[it]>1)
		return it;
	}
}
