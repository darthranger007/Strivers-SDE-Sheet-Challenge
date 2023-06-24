bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();

        int t=-1;
        for(int i=1;i<n;i++)
        {
            if(target<mat[i][0])
            {
                t=i-1;
                break;
            }
        }
        if(t>=0)
        {
            for(int i=0;i<m;i++)
            {
                if(mat[t][i]==target)
                return true;
            }
            return false;
        }
        else {
            for(int i=0;i<m;i++)
            {
                if(mat[n-1][i]==target)
                return true;
            }
            return false;
        }
}