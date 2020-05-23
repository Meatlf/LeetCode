#include <iostream>
#include "Linked_List.h"

// 328.奇偶链表
// 参考资料:
// [1] [奇偶链表](https://leetcode-cn.com/problems/odd-even-linked-list/solution/qi-ou-lian-biao-by-leetcode/)
ListNode *oddEvenList(ListNode *head)
{
    if (head == NULL)
        return NULL;
    ListNode *odd = head;
    ListNode *evenhead = head->next;
    ListNode *even = evenhead;
    while (even != NULL && even->next != NULL)
    {
        odd->next = odd->next->next;
        odd = odd->next;

        even->next = even->next->next;
        even = even->next;
    }
    odd->next = evenhead;
    return head;
}