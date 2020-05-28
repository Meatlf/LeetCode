#include <vector>
#include <queue>
using namespace std;

// 485.最大连续1的个数
// 参考资料:
// [1] [最大连续1的个数](https://leetcode-cn.com/problems/max-consecutive-ones/solution/zui-da-lian-xu-1de-ge-shu-by-leetcode/)

// V1 常规法
// 关键词: 常规法
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count;
    int maxCount = 0;
    int i = 0;

    for (; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            maxCount = count > maxCount ? count : maxCount;
            count = 0;
        }
    }
    return maxCount > count ? maxCount : count;
}