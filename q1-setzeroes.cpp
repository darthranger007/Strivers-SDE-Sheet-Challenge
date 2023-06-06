#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	
	int n=matrix.size();
	int m=matrix[0].size();
	vector<vector<int>> ans(n,vector<int>(m,0));
	ans=matrix;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
			{
				for(int a=0;a<m;a++)
				{
					ans[i][a]=0;
				}
				for(int a=0;a<n;a++)
				{
					ans[a][j]=0;
				}

			}
			else continue;
		}
	}
	matrix=ans;
}