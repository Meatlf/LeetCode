#include <vector>
using namespace std;

// 240.搜索二维矩阵II
// 复杂度分析: 时间复杂度: O(m+n) 空间复杂度: O(1)
// 参考资料: [1] [搜索二维矩阵 II](https://leetcode-cn.com/problems/search-a-2d-matrix-ii/solution/sou-suo-er-wei-ju-zhen-ii-by-leetcode-2/)

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size() - 1;
    int col = 0;
    while (row >= 0 && col < matrix[0].size())
    {
        if (matrix[row][col] < target)
            col++;
        else if (matrix[row][col] > target)
            row--;
        else
            return true;
    }
    return false;
}