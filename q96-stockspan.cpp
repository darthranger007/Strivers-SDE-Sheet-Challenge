vector<int> findStockSpans(vector<int>& prices) {
    // Write your code here.
    int n=prices.size();
    vector<int> ans(n,1);
    stack<pair<int,int>> st;
    
    for(int i=0;i<n;i++){
        int c=0;
        while(!st.empty()&& st.top().first<prices[i]){
            c+=st.top().second;
            st.pop();
        }
        if(st.empty())
        {
            st.push({prices[i],c+1});
        }
        else{
            st.push({prices[i],c+1 });
            }
        
        
        ans[i]=st.top().second;
    }
    return ans;
}