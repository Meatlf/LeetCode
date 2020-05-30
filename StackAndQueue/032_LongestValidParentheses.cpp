#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

// 32.最长有效括号
int longestValidParentheses(string s)
{
}
bool isValid(string const &s)
{
    string left = "([{";
    string right = ")]}";
    stack<char> stk;

    for (auto c : s)
    {
        if (left.find(c) != string::npos)
            stk.push(c);
        else
        {
            if (stk.empty() || stk.top() != left[right.find(c)])
                return false;
            else
                stk.pop();
        }
    }
    return stk.empty();
}