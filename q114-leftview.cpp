void f(vector<int> &ans, TreeNode<int>* root,int l)
{
    if(root==NULL)
    return ;
    if(ans.size()==l)
    {
        ans.push_back(root->data);
    }
    
    f(ans,root->left,l+1);
    f(ans,root->right,l+1);
    
}