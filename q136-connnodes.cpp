#include <bits/stdc++.h> 
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/
// void help(BinaryTreeNode< int > *root)
// {
//     if(!root)
//     return ;

//     if(root->left && root->right)
//     {
//         root->left->next=root->right;
//         root->right->next=NULL;
//         help(root->left);
//         help(root->right);
//     }
//     else if(root->left)
//     {
//         root->left->next=NULL;
//         help(root->left);
//     } else if(root->right){
//       root->right->next = NULL;
//       help(root->right);
//     }
//     return;

// }
void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    if(root)
    root->next=NULL;
    queue<BinaryTreeNode< int > *>q;
    q.push(root);
    BinaryTreeNode< int > * t=q.front();
      
    while(!q.empty())
    {
        
        
        int s=q.size();
        for(int i=0;i<s-1;i++)
        {
            BinaryTreeNode< int > *p=q.front();
            q.pop();
            p->next=q.front();
            if(p->left)q.push(p->left);
            if(p->right)q.push(p->right);
        }
        BinaryTreeNode< int > *y=q.front();
        y->next=NULL;
        q.pop();
        if(y->left)q.push(y->left);
            if(y->right)q.push(y->right);

    }
}