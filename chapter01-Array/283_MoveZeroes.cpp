#include <vector>
using namespace std;

// 283.移动零
// 参考资料: [1]
// Q: 如何遍历vector?
// A: for (i = 0; i < nums.size() - 1; i++)

// V1.1 两次遍历
void moveZeroes(vector<int> &nums)
{
    int i;
    int j = 0;
    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
            nums[j++] = nums[i];
    }
    for (i = j; i < nums.size(); i++)
        nums[i] = 0;
}

// V1.2 两次遍历
void moveZeroes(vector<int> &nums)
{
    int i;
    int j = 0;
    for (i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == 0)
            j++;
        nums[i + 1 - j] = nums[i + 1];
    }
    for (i = nums.size() - j; i < nums.size(); i++)
        nums[i] = 0;
}

// V2 一次遍历
void moveZeroes(vector<int> &nums)
{
    int i;
    int j = 0;
    int temp;
    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[i];
            nums[i] = 0;
            nums[j++] = temp;
        }
    }
}