#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int zer=0,on=0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
      {
         arr[zer]=0;
         zer++;
         
      }
      if(arr[i]==1)
      {
         on++;
      }
   }
   for(int i=zer;i<n;i++)
   {
      while(on>0)
      {
         arr[i]=1;
         on--;
         i++;
      }
      if(i<n)
      arr[i]=2;
   }
   //   Write your code here
}