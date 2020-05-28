#include <vector>
#include <queue>
using namespace std;

// 566.重塑矩阵
// 参考资料:
// [1] [重塑矩阵](https://leetcode-cn.com/problems/reshape-the-matrix/solution/zhong-su-ju-zhen-by-leetcode/)
// [2] [Queue队列详解](https://www.cnblogs.com/jinxiang1224/p/8468405.html)

// V1
// 关键词: 队列,赋值
// 复杂度分析: 时间复杂度: O(m*n) 空间复杂度: O(m*n)
// Q: 如何使用vector定义二维数组?
// A: vector<vector<int>> res(r, vector<int>(c));
vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
{
    vector<vector<int>> res(r, vector<int>(c));
    queue<int> matrixReshapeQueue;
    if (nums.size() == 0 || r * c != nums.size() * nums[0].size())
        return nums;
    int rows = 0, cols = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[0].size(); j++)
        {
            matrixReshapeQueue.push(nums[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j] = matrixReshapeQueue.front();
            matrixReshapeQueue.pop();
        }
    }
    return res;
}

// V2
// 关键词: 赋值
// 复杂度分析: 时间复杂度: O(m*n) 空间复杂度: O(m*n)
vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
{
    vector<vector<int>> res(r, vector<int>(c));
    if (nums.size() == 0 || r * c != nums.size() * nums[0].size())
        return nums;
    int rows = 0, cols = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[0].size(); j++)
        {
            res[rows][cols] = nums[i][j];
            cols++;
            if (cols == c)
            {
                rows++;
                cols = 0;
            }
        }
    }
    return res;
}