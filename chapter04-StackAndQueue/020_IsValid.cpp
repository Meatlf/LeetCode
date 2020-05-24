#include <iostream>
#include <cstring>
#include<vector>
#include<stack>
using namespace std;

// 20.有效的括号
// Q: 如何表示栈?
// A: stack<char> stk;

// Q: 如何遍历字符串?
// A: for(auto c : s)

// Q: 涉及到的栈的操作有哪些?
// A: 栈顶(top()),入栈(push()),出栈(pop())

// Q: 涉及到的string操作有哪些?
// A: 查找(find(c)),是否为空(string::npos).

// 参考资料:
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