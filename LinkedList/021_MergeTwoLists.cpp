#include <iostream>
#include "Linked_List.h"

// 21. 合并两个有序链表

// 暴力法
// 时间复杂度: O(M+N)
// 空间复杂度: O(1)
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode *preHead = new ListNode(-1);
    ListNode *prev = preHead;
    while (l1 != NULL && l2 != NULL)
    {
        // prev指向较小的那一个
        // prev和较小的那一个均向后移一个
        if (l1->val <= l2->val)
        {
            prev->next = l1;
            l1 = l1->next;
        }
        else
        {
            prev->next = l2;
            l2 = l2->next;
        }
        prev = prev->next;
    }
    prev->next = l1 == NULL ? l2 : l1;
    return preHead->next;
}

// 递归法
// 时间复杂度: O(M+N)
// 空间复杂度: O(M+N)
// 说明: 搞清楚终止条件和递归体就可以写出代码了. P.S 递归太让我头疼了!
// 参考资料:
// [画解算法：21. 合并两个有序链表](https://leetcode-cn.com/problems/merge-two-sorted-lists/solution/hua-jie-suan-fa-21-he-bing-liang-ge-you-xu-lian-bi/)
// [一看就会，一写就废？详解递归](https://leetcode-cn.com/problems/merge-two-sorted-lists/solution/yi-kan-jiu-hui-yi-xie-jiu-fei-xiang-jie-di-gui-by-/)
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    if (l1->val < l2->val)
    {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
    else
    {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}