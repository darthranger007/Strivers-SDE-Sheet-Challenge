class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int maxi=INT_MIN;
        int mini=INT_MIN;
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(arr[i]<0)
        mini=max(mini,arr[i]);
        if(sum<0)
        {
            sum=0;
        }
        else {
            maxi=max(maxi,sum);
        }

    }
    if(maxi<0)
    return mini;
    return maxi;
    }
};