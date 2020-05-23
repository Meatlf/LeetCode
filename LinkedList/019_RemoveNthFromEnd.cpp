#include <iostream>
#include "Linked_List.h"

// 19.删除链表的倒数第N个节点
// 参考资料: [1] [删除链表的倒数第N个节点](https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/solution/shan-chu-lian-biao-de-dao-shu-di-nge-jie-dian-by-l/)
// V1: 两次遍历算法
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *p = head;
    int length = 0;
    while (p != NULL)
    {
        p = p->next;
        length++;
    }
    length -= n;
    p = dummy;
    while (length > 0)
    {
        length--;
        p = p->next;
    }
    p->next = p->next->next;
    return dummy->next;
}

// V2: 一次遍历算法
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *first = dummy;
    ListNode *second = dummy;

    for (int i = 1; i <= n + 1; i++)
        first = first->next;

    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    second->next = second->next->next;
    return dummy->next;
}