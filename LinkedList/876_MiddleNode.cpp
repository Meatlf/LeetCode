#include <iostream>
#include "Linked_List.h"

// 876.
ListNode *middleNode(ListNode *head)
{
    ListNode *pre = head;
    ListNode *cur = pre->next;
    while (cur != NULL)
    {
        if (cur->next)
        {
            cur = cur->next->next;
        }
        else
        {
            cur = cur->next;
        }
        pre = pre->next;
    }
    return pre;
}
