#include <iostream>
#include "Linked_List.h"

// 206.反转链表
// 参考资料: [动画演示+多种解法 206. 反转链表](https://leetcode-cn.com/problems/reverse-linked-list/solution/dong-hua-yan-shi-206-fan-zhuan-lian-biao-by-user74/)

// V1: 迭代法
ListNode *reverseList(ListNode *head)
{
    ListNode *pre = NULL;
    ListNode *cur = head;

    while (cur != NULL)
    {
        ListNode *next = cur->next; // 首先要判断cur不等于NULL,然后再执行该语句.
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}

// V2: 递归法
ListNode *reverseList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    ListNode *cur = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return cur;
}
