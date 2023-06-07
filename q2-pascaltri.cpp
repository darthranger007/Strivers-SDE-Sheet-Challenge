#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  
  
        vector<vector<long long int>> v;
if(n==0)
return v;
  
  vector<long long int> a;
  a.push_back(1);
  v.push_back(a);
  a.clear();
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      //<vector<long long int> a;
      if(j==0 || j==i)
      {
        a.push_back(1);
      }
      else {
        a.push_back(v[i-1][j]+v[i-1][j-1]);
      }
    }
    v.push_back(a);
    a.clear();
  }
  return v;
    
}
