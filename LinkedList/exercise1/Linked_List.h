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
	void deleteNode(ListNode *node);
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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);

	// 206.反转链表
	// V1: 迭代法
	ListNode *reverseListV1(ListNode *head);
	// V2: 递归法
	ListNode *reverseListV2(ListNode *head);
} // namespace LISTNODE
#endif