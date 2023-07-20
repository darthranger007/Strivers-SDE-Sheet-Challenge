#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/

void f(vector < int > &s,TreeNode < int > * root,int x)
{

if(root==NULL)
return;
if(root->data==x)
{
s.push_back(root->data);
return ;
}
else{
	s.push_back(root->data);
	if(root->left){
f(s,root->left,x);
if(s[s.size()-1]==x)
return;
else
s.pop_back();
	}

if(root->right){
f(s,root->right,x);
if(s[s.size()-1]==x)
return;
else
s.pop_back();
	}

}
return;






}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	vector<int> ans;
	f(ans,root,x);
	return ans;
}
