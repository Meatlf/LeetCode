#include <iostream>
#include "Linked_List.h"

ListNode *LISTNODE::createNode()
{

	ListNode *head = (ListNode *)malloc(sizeof(ListNode));
	ListNode *node = head;

	int x = -1;
	int i = 0;

	std::cout << "If you input ListNode value equals to 0,input will end!" << std::endl
			  << std::endl;

	while (1)
	{
		std::cout << "Please input ListNode value:";
		std::cin >> x;
		if (x == 0)
			break;
		ListNode *s = (ListNode *)malloc(sizeof(ListNode));
		s->val = x;

		node->next = s;
		node = node->next;
		node->next = NULL;
	}
	std::cout << std::endl;
	return head;
}

void LISTNODE::printNode(ListNode *node)
{
	ListNode *pt = node->next;
	std::cout << "Print list node��" << std::endl;
	while (pt != NULL)
	{
		std::cout << pt->val << "->";
		pt = pt->next;
	}
	std::cout << "NULL";
	putchar('\n');
}

void LISTNODE::deleteNode(ListNode *node)
{
	node->val = node->next->val;
	node->next = node->next->next;
}

ListNode *LISTNODE::reverseListV1(ListNode *head)
{
	ListNode *pre = NULL;
	ListNode *cur = head;

	while (cur != NULL)
	{
		ListNode *next = cur->next; // 首先要判断cur不等于NULL,然后再执行该语句.
		cur->next = pre;
		pre = cur;
		cur = next;
	}
	return pre;
}

ListNode *LISTNODE::reverseListV2(ListNode *head)
{
	if (head == NULL || head->next == NULL)
		return head;

	ListNode *cur = reverseListV2(head->next);
	head->next->next = head;
	head->next = NULL;
	return cur;
}

ListNode *LISTNODE::middleNode(ListNode *head)
{
	ListNode *pre = head;
	ListNode *cur = pre->next;
	while (cur != NULL)
	{
		if (cur->next)
		{
			cur = cur->next->next;
		}
		else
		{
			cur = cur->next;
		}
		pre = pre->next;
	}
	return pre;
}

ListNode *LISTNODE::mergeTwoListsV1(ListNode *l1, ListNode *l2)
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

ListNode *LISTNODE::mergeTwoListsV2(ListNode *l1, ListNode *l2)
{
	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;

	if (l1->val < l2->val)
	{
		l1->next = mergeTwoListsV2(l1->next, l2);
		return l1;
	}
	else
	{
		l2->next = mergeTwoListsV2(l1, l2->next);
		return l2;
	}
}

ListNode *LISTNODE::deleteDuplicates(ListNode *head)
{
	std::cout << "Delete duplicate elements in the sorted list!" << std::endl;
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

//		https://blog.csdn.net/my_clear_mind/article/details/81865061
ListNode *LISTNODE::swapPairs(ListNode *head)
{
	ListNode *dummyHead = new ListNode(0);
	dummyHead->next = head;
	ListNode *cur = dummyHead;
	while (cur->next != NULL && cur->next->next != NULL)
	{
		ListNode *node1 = cur->next;
		ListNode *node2 = node1->next;
		ListNode *next = node2->next;
		node2->next = node1;
		node1->next = next;
		cur->next = node2;
		cur = node1;
	}
	return dummyHead->next;
}

ListNode *LISTNODE::getIntersectionNode(ListNode *headA, ListNode *headB)
{
	if (headA == NULL || headB == NULL)
		return NULL;
	ListNode *a = headA, *b = headB;
	while (a != b)
	{
		a = (a == NULL ? headB : a->next);
		b = (b == NULL ? headA : b->next);
	}
	return a;
}

void LISTNODE::deleteNode(ListNode *node)
{
	node->val = node->next->val;
	node->next = node->next->next;
}