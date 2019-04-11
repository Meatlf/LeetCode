#include<iostream>
#include"Linked_List.h"

ListNode* LISTNODE::createNode(){

	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	ListNode* node = head;

	int x = -1;
	int i = 0;

	std::cout << "If you input ListNode value equals to 0,input will end!" << std::endl <<std::endl;

	while (1)
	{
		std::cout<<"Please input ListNode value:";
		std::cin >> x;
		if (x == 0)
			break;
		ListNode* s = (ListNode*)malloc(sizeof(ListNode));
		s->val = x;

		node->next = s;
		node = node->next;
		node->next = NULL;
	}
	std::cout << std::endl;
	return head;
}

void LISTNODE::printNode(ListNode* node) {
	ListNode* pt = node->next;
	std::cout<<"Print list node："<<std::endl;
	while (pt != NULL)
	{
		std::cout << pt->val << "->";
		pt = pt->next;
	}
	std::cout << "NULL";
	putchar('\n');
}

//void LISTNODE::deleteNode(ListNode* node) {
//	node->val = node->next->val;
//	node->next = node->next->next;
//}
//
//ListNode* LISTNODE::reverseList(ListNode* head) {
//	ListNode* pre = NULL;
//	ListNode* cur = head;
//
//	while (cur != NULL)
//	{
//		ListNode* next = cur->next;
//		cur->next = pre;
//		pre = cur;
//		cur = next;
//	}
//	return pre;
//}
//
//ListNode* LISTNODE::middleNode(ListNode* head) {
//	ListNode* pre = head;
//	ListNode* cur = pre->next;
//	while (cur != NULL)
//	{
//		if (cur->next) {
//			cur = cur->next->next;
//		}
//		else
//		{
//			cur = cur->next;
//		}
//		pre = pre->next;
//	}
//	return pre;
//}
//
//ListNode* LISTNODE::mergeTwoLists(ListNode *l1, ListNode *l2) {
//	if (l1 == NULL)return l2;
//	if (l2 == NULL)return l1;
//
//	if (l1->val < l2->val) {
//		l1->next = mergeTwoLists(l1->next, l2);
//		return l1;
//	}
//	else
//	{
//		l2->next = mergeTwoLists(l1, l2->next);
//		return l2;
//	}
//}
//
////83. 删除排序链表中的重复元素
//ListNode* LISTNODE::deleteDuplicates(ListNode* head) {
//	if (head != NULL) {
//		ListNode* cur = head;
//		ListNode* next = head->next;
//		while (next != NULL)
//		{
//			if (cur->val == next->val)
//			{
//				cur->next = next->next;
//				next = next->next;
//			}
//			else
//			{
//				cur = next;
//				next = next->next;
//			}
//		}
//	}
//	return head;
//}
//
////24. 两两交换链表中的节点
////!swapPairs：两两交换聊表中的节点
///*
//*功能：实现每相邻的两个节点之间的呼唤
//*说明：本题的关键是设置4个节点变量
//*函数：
//		pram：ListNode* head
//		return: ListNode* 指向头节点
//*作者：
//		tztang
//*参考资料：
//		https://blog.csdn.net/my_clear_mind/article/details/81865061
//*日期：
//        2019-01-15
//"""
//* 时间复杂度O(n)，空间复杂度O(1)
//*/
//ListNode * LISTNODE::swapPairs(ListNode * head)
//{
//	ListNode* dummyHead = new ListNode(0);
//	dummyHead->next = head;
//	ListNode* cur = dummyHead;
//	while (cur->next != NULL&&cur->next->next != NULL)
//	{
//		ListNode* node1 = cur->next;
//		ListNode* node2 = node1->next;
//		ListNode* next = node2->next;
//		node2->next = node1;
//		node1->next = next;
//		cur->next = node2;
//		cur = node1;
//	}
//	return dummyHead->next;
//}
//