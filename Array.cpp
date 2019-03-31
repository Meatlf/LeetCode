#include<iostream>
#include<algorithm>
#include"Array.h"


//905. 按奇偶排序数组
//!swapPairs：两两交换聊表中的节点
/*
*功能：实现每相邻的两个节点之间的呼唤
*说明：本题的关键是设置4个节点变量
*函数：
pram：ListNode* head
return: ListNode* 指向头节点
*作者：
tztang
*参考资料：
https://blog.csdn.net/my_clear_mind/article/details/81865061
*日期：
2019-01-15
"""
* 时间复杂度O(n)，空间复杂度O(1)
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
