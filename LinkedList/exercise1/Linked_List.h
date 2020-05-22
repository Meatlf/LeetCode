#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

// Definition for singly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

namespace LISTNODE
{
	ListNode *createNode();
	void printNode(ListNode *node);

	ListNode *reverseList(ListNode *head);
	// 876.
	ListNode *middleNode(ListNode *head);

	// 21. 合并两个有序链表

	// 暴力法
	// 时间复杂度: O(M+N)
	// 空间复杂度: O(1)
	ListNode *mergeTwoListsV1(ListNode *l1, ListNode *l2);

	// 递归法
	// 时间复杂度: O(M+N)
	// 空间复杂度: O(M+N)
	// 说明: 搞清楚终止条件和递归体就可以写出代码了. P.S 递归太让我头疼了!
	// 参考资料:
	// [画解算法：21. 合并两个有序链表](https://leetcode-cn.com/problems/merge-two-sorted-lists/solution/hua-jie-suan-fa-21-he-bing-liang-ge-you-xu-lian-bi/)
	// [一看就会，一写就废？详解递归](https://leetcode-cn.com/problems/merge-two-sorted-lists/solution/yi-kan-jiu-hui-yi-xie-jiu-fei-xiang-jie-di-gui-by-/)
	ListNode *mergeTwoListsV2(ListNode *l1, ListNode *l2);

	// 83.
	ListNode *deleteDuplicates(ListNode *head);

	// 24.
	ListNode *swapPairs(ListNode *head);

	// 160.相交链表
	// 参考资料: [1] [教你用浪漫的方式找到两个单链表相交的起始节点](https://leetcode-cn.com/problems/intersection-of-two-linked-lists/solution/jiao-ni-yong-lang-man-de-fang-shi-zhao-dao-liang-2/)
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);

	// 206.反转链表
	// V1: 迭代法
	ListNode *reverseListV1(ListNode *head);
	// V2: 递归法
	ListNode *reverseListV2(ListNode *head);

	// 237.删除链表中的节点
	// 参考资料:[1] [删除链表中的节点](https://leetcode-cn.com/problems/delete-node-in-a-linked-list/solution/shan-chu-lian-biao-zhong-de-jie-dian-by-leetcode/)
	void deleteNode(ListNode *node);

	// 19.删除链表的倒数第N个节点
	// 参考资料: [1] [删除链表的倒数第N个节点](https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/solution/shan-chu-lian-biao-de-dao-shu-di-nge-jie-dian-by-l/)
	// V1: 两次遍历算法
	ListNode *removeNthFromEndV1(ListNode *head, int n);

	// V2: 一次遍历算法
	ListNode *removeNthFromEndV2(ListNode *head, int n);
} // namespace LISTNODE
#endif