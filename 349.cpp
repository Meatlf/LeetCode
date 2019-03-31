#include <iostream>
#include <vector>
#include <set>
using namespace std;

/// 349. Intersection of Two Arrays
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

		set<int> record(nums1.begin(), nums1.end());	// begin 返回一个指向第一个元素的迭代器 ，end 返回一个指向超尾的迭代器

		set<int> resultSet;
		for (int i = 0; i < nums2.size(); i++)
			if (record.find(nums2[i]) != record.end())
				resultSet.insert(nums2[i]);

		return vector<int>(resultSet.begin(), resultSet.end());
	}
};

int main() {
	int nums1[] = {1, 2, 2, 1};
	vector<int> vec1(nums1, nums1 + sizeof(nums1) / sizeof(int));

	int nums2[] = { 2, 2 };
	vector<int> vec2(nums2, nums2 + sizeof(nums2) / sizeof(int));

	vector<int> res = Solution().intersection(vec1, vec2);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}