#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

// Definition for singly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
#endif