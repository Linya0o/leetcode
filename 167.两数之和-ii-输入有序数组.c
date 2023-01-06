/*
 * @lc app=leetcode.cn id=167 lang=c
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int left = 0, right = numbersSize - 1;
    int *ans = calloc(2, sizeof(int));
    *returnSize = 2;
    while (left <= right) {
        int sum = numbers[left] + numbers[right];
        if (sum == target) {
            ans[0] = left + 1;
            ans[1] = right + 1;
            break;
        }
        else if (sum < target) left++;
        else if (sum > target) right--;
    }
    return ans;
}
// @lc code=end

