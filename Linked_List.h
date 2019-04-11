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
	// 876.������м�ڵ�
	ListNode* middleNode(ListNode* head);
	// 21.�ϲ�������������
	ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);
	//83. ɾ�����������е��ظ�Ԫ��
	ListNode* deleteDuplicates(ListNode* head);

	//24. �������������еĽڵ�
	//1������ͷ�ڵ�
	ListNode* swapPairs(ListNode* head);
}
#endif