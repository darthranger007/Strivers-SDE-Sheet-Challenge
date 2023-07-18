#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<int> s;
	int mine=INT_MAX;
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(s.size()==0){
			s.push(num);
			mine=num;
			}
			else{
				if(num<mine)
				{
					s.push(2*num-mine);
					mine=num;
					
				}
				else {
					s.push(num);
				}
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(s.size()==0)
			return -1;
			if(s.top()<mine)
			{
				int a=mine;
				mine=(2*mine) -s.top();
				s.pop();
				return  a;
			}
			else {
				
				int a=s.top();
				s.pop();
				return a;
			}
			// Write your code here.
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(s.size()==0)
			return -1;
			if(s.top()<mine)
			{
				int a=mine;
				//mine=(2*mine) -s.top();
				//s.pop();
				return  a;
			}
			return s.top();
			// Write your code here.
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(s.size()==0)
			return -1;
			return mine;
			// Write your code here.
		}
};