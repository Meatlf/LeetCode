#include<iostream>
#include<algorithm>
#include"Array.h"


//905. ����ż��������
//!swapPairs�����������ı��еĽڵ�
/*
*���ܣ�ʵ��ÿ���ڵ������ڵ�֮��ĺ���
*˵��������Ĺؼ�������4���ڵ����
*������
pram��ListNode* head
return: ListNode* ָ��ͷ�ڵ�
*���ߣ�
tztang
*�ο����ϣ�
https://blog.csdn.net/my_clear_mind/article/details/81865061
*���ڣ�
2019-01-15
"""
* ʱ�临�Ӷ�O(n)���ռ临�Ӷ�O(1)
*/
std::vector<int> ARRAY::sortArrayByParity(std::vector<int>& A) {
	/*int i = 0;
	int j = A.size();
	A[i] = A[i] + A[j];
	A[j] = A[i] - A[j];
	A[i] = A[i] - A[j];*/
	return A;
}

std::vector<int> ARRAY::sortedSquares(std::vector<int>& A) {
	std::vector<int> res;
	for (int a : A) {
		res.push_back(a * a);
	}
	std::sort(res.begin(),res.end());
	return res;
}
