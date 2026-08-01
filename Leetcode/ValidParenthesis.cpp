// Leetcode 20 : Valid Parenthesis

#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string s) 
{
    stack<char> st;

    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // Opening bracket
        if(ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        // Closing bracket
        else
        {
            if(st.empty())
                return false;

            if((ch == ')' && st.top() == '(') ||
               (ch == '}' && st.top() == '{') ||
               (ch == ']' && st.top() == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
   return st.empty();
}