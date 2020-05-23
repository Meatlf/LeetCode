#include <iostream>
#include "Linked_List.h"

// 237.删除链表中的节点
// 参考资料:[1] [删除链表中的节点](https://leetcode-cn.com/problems/delete-node-in-a-linked-list/solution/shan-chu-lian-biao-zhong-de-jie-dian-by-leetcode/)
void deleteNode(ListNode *node)
{
    node->val = node->next->val;
    node->next = node->next->next;
}