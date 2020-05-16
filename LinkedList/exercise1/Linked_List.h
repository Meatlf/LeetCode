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
	// 21.
	ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);
	// 83.
	ListNode *deleteDuplicates(ListNode *head);

	// 24.
	ListNode *swapPairs(ListNode *head);
} // namespace LISTNODE
#endif