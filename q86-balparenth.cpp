#include<bits/stdc++.h>
bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> st;
    int i=0;
    while(i<s.length())
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
        st.push(s[i]);
        i++;
        }
        else if(st.empty())
        return false;
        else if(s[i]=='}')
        {
                if(st.top()=='{')
                st.pop();
                else return false;
                i++;
        }
        
         else if(s[i]==')')
         {
             if(st.top()=='(')
                st.pop();
                else return false;
                i++;
         }

          else if(s[i]==']')
        {
        
            if(st.top()=='[')
                st.pop();
                else return false;
                i++;
        }
    }
    return true;

}