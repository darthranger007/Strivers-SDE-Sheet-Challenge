#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int> m;
	vector<int> ans;
	for(int i=0;i<arr.size();i++)
	{
		m[arr[i]]++;
                if (m[arr[i]] > (1) + arr.size() / 3) {
                    continue;
                } else if (m[arr[i]] > arr.size() / 3) {
                  ans.push_back(arr[i]);
                }
        }

                return ans;
        
}