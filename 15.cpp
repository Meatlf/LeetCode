/*
功能：

说明：


函数：

作者：

参考资料：
        http://blog.csdn.net/u010656539/article/details/52204607
日期：
        2017-11-20
*/
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

class Solution {
public:
	vector< vector<int> > threeSum(vector<int> &num) {
		vector<int> numSet(3);
		vector< vector<int> > r;
		// 1.排序
		sort(num.begin(), num.end());
		int sum;
		int len = num.size();
		// 2.拿出第一个数，转化为两数和问题。注意外层循环到倒数第三个数即可
		for (int i = 0; i < len - 2; i++) {
			sum = 0 - num[i];
			numSet[0] = num[i];
			// 3.两数和问题
			for (int j = i + 1, k = len - 1; j < k;) {
				if (num[j] + num[k] == sum) {
					numSet[1] = num[j++];
					numSet[2] = num[k--];
					r.push_back(numSet);
					// 根据题目要求，跳过重复元素
					while (j < k && num[j] == num[j - 1])
						j++;
					while (j < k && num[k] == num[k + 1])
						k--;
				}
				else if (num[j] + num[k] < sum)
					j++;
				else
					k--;
			}
			while (i < len - 2 && num[i + 1] == num[i])
				i++;
		}
		return r;
	}
};

int main() {
	int a[] = { -2, 13, -5, -4, -7, 8, 0, -9, 6, 7, 0, -4, 2, 1, -2, 4 };
	int len = sizeof(a) / sizeof(a[0]);
	vector<int> num(a, a + len);
	Solution s;
	vector< vector<int> > result;
	result = s.threeSum(num);
	// 输出结果
	for (int q = 0; q < result.size(); q++) {
		vector<int> x = result[q];
		cout << "(";
		int t;
		for (t = 0; t < x.size() - 1; t++) {
			cout << x[t] << " ";
		}
		cout << x[t];
		cout << ")" << endl;
	}
	system("pause");
	return 0;
}