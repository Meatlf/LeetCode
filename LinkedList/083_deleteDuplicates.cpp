#include <iostream>
#include "Linked_List.h"

// 83.
ListNode *deleteDuplicates(ListNode *head)
{
    if (head != NULL)
    {
        ListNode *cur = head;
        ListNode *next = head->next;
        while (next != NULL)
        {
            if (cur->val == next->val)
            {
                cur->next = next->next;
                next = next->next;
            }
            else
            {
                cur = next;
                next = next->next;
            }
        }
    }
    return head;
}