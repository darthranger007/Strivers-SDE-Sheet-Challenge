#include <bits/stdc++.h>
void insertSort(stack<int> &s , int d){
	// Base Case
	if(s.empty() || !s.empty() && s.top() < d){
		s.push(d);
		return;
	}
	int top = s.top();
	s.pop();
	// Recursive Call
	insertSort(s,d);
	s.push(top);
} 
void sortStack(stack<int> &stack)
{
	// Base case
	if(stack.empty()){
		return;
	}
	int top = stack.top();
	stack.pop();
	// Recursive Call
	sortStack(stack);
	insertSort(stack , top);
}