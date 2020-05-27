#include <vector>
using namespace std;

// 566.重塑矩阵
// 参考资料: [1] [重塑矩阵](https://leetcode-cn.com/problems/reshape-the-matrix/solution/zhong-su-ju-zhen-by-leetcode/)
// Q: 如何遍历vector?
// A: for (i = 0; i < nums.size() - 1; i++)
vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
int[][] res = new int[r][c];
if(nums.lenth == 0 || r * c != nums.length*nums[0].length)
return nums;
int rows = 0, cols = 0;
for(int i = 0; i < )

}