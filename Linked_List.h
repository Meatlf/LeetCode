#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

namespace LISTNODE {
	ListNode* createNode();
	void printNode(ListNode* node);
    void deleteNode(ListNode* node);
	ListNode* reverseList(ListNode* head);
	// 876.链表的中间节点
	ListNode* middleNode(ListNode* head);
	// 21.合并两个有序链表
	ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);
	//83. 删除排序链表中的重复元素
	ListNode* deleteDuplicates(ListNode* head);

	//24. 两两交换链表中的节点
	//1）构建头节点
	ListNode* swapPairs(ListNode* head);
}
#endif