#include <bits/stdc++.h> 
int f(int m,int n,vector<vector<int>> &dp)
{
	if(m==0 && n==0)
	{
		dp[m][n]=1;
		return 1;

	}
	if(dp[m][n]!=-1)
	return dp[m][n];
	int l=0,r=0;

	if(m-1>=0)
	 l=f(m-1,n,dp);
	if(n-1>=0)
	 r=f(m,n-1,dp);
	return dp[m][n]=l+r;
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>> dp(m,vector<int>(n,-1));
	int ans=f(m-1,n-1,dp);
	return ans;
}