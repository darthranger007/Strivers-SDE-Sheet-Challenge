#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int maxDepth(TreeNode<int> *root) {
    // Write your code here.
    int ans=0;
    if(!root)
    return 0;
    queue<pair<TreeNode<int> *,int>>q ;
    q.push({root,0});
    while(!q.empty()){
TreeNode<int> * t=q.front().first;
int l=q.front().second;
ans=max(ans,q.front().second);
q.pop();
if(t->left)
q.push({t->left,l+1});
if(t->right)
q.push({t->right,l+1});

    }
    return ans;
}