#include <iostream>
#include "Linked_List.h"

// 24.
//	https://blog.csdn.net/my_clear_mind/article/details/81865061
ListNode *swapPairs(ListNode *head)
{
    ListNode *dummyHead = new ListNode(0);
    dummyHead->next = head;
    ListNode *cur = dummyHead;
    while (cur->next != NULL && cur->next->next != NULL)
    {
        ListNode *node1 = cur->next;
        ListNode *node2 = node1->next;
        ListNode *next = node2->next;
        node2->next = node1;
        node1->next = next;
        cur->next = node2;
        cur = node1;
    }
    return dummyHead->next;
}