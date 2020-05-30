#include <stack>
using namespace std;

// 232.使用栈实现队列
// 复杂度分析: 时间复杂度: O(n) 空间复杂度: O(1)
// 姊妹题： 225.使用队列实现栈
// 参考资料: [1] [【小白刷题之路Day29】leetcode232.用栈实现队列（C++ STL stack的熟悉与使用）](https://www.cnblogs.com/ACStrive/p/11602538.html)

class MyQueue
{
private:
    stack<int> myStack1;
    stack<int> myStack2;

    void in2out()
    {
        if (myStack2.empty())
        {
            while (!myStack1.empty())
            {
                myStack2.push(myStack1.top());
                myStack1.pop();
            }
        }
    }

public:
    /** Initialize your data structure here. */
    MyQueue()
    {
    }

    /** Push element x to the back of queue. */
    void push(int x)
    {
        myStack1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
        in2out();
        int data = myStack2.top();
        myStack2.pop();
        return data;
    }

    /** Get the front element. */
    int peek()
    {
        in2out();
        return myStack2.top();
    }

    /** Returns whether the queue is empty. */
    bool empty()
    {
        return (myStack1.empty() && myStack2.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */