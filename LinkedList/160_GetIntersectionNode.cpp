#include <iostream>
#include "Linked_List.h"

// 160.相交链表
// 参考资料: [1] [教你用浪漫的方式找到两个单链表相交的起始节点](https://leetcode-cn.com/problems/intersection-of-two-linked-lists/solution/jiao-ni-yong-lang-man-de-fang-shi-zhao-dao-liang-2/)
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;
    ListNode *a = headA, *b = headB;
    while (a != b)
    {
        a = (a == NULL ? headB : a->next);
        b = (b == NULL ? headA : b->next);
    }
    return a;
}
