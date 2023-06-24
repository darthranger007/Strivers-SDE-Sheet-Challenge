#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
      int left = 0 , right = m-1 , top  = 0 ,bottom = n-1;

    while(left < right && top < bottom ){
        int temp = mat[top][left];
        for(int col = left+1; col <= right; col++){
            int k = mat[top][col];
            mat[top][col] = temp;
            temp = k;
        }
        top++;

        for(int row = top; row <= bottom; row++){
            int k = mat[row][right];
            mat[row][right] = temp;
            temp = k;
        }
        right--;

        for(int col = right; col >= left; col--){
            int k = mat[bottom][col];
            mat[bottom][col] = temp;
            temp = k;
        }
        bottom--;

        for(int row = bottom; row >= top; row--){
            int k = mat[row][left];
            mat[row][left] = temp;
            temp = k;
        }
        left++;

        mat[top-1][left-1] = temp;
    }
    // Write your code here
    // bool vis[n][m] = {false};
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         if(i==j)
    //         continue;
    //         else {
    //           if (vis[i][j] == false) {
    //             int t = mat[i][j];
    //             mat[i][j] = mat[j][i];
    //             mat[j][i] = t;
    //             vis[i][j]=true;
    //             vis[j][i]=true;
    //           }
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m/2;j++)
    //     {
    //         int t=mat[i][m-1-j];
    //         mat[i][m-1-j]=mat[i][j];
    //         mat[i][j]=t;
    //     }

    // }

}