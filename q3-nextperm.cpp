#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    int ind=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(p[i+1]>p[i])
        {
            ind=i;
            int t=n-1;
            while(t>=ind+1)
            {
                if(p[t]>=p[ind])
                {
                    int g=0;
                    g=p[t];
                    p[t]=p[ind];
                    p[ind]=g;
                    break;

                }
            }
           
            break;

        }

    }
    if(ind<0)
    {
        reverse(p.begin(),p.end());
        return p;
    }
    else{
        int a=n-1;
        for(int i=ind+1;i<=(n+(ind))/2;i++)
        {
            int t=0;
            t=p[i];
            p[i]=p[a];
            p[a]=t;
            a--;

        }
        return p;
    }
    // next_permutation(p.begin(),p.end());
    // return p;
    //  Write your code here.
}