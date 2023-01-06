/*
 * @lc app=leetcode.cn id=704 lang=c
 *
 * [704] 二分查找
 */

// @lc code=start

int search(int *nums, int numsSize, int target) {
    int begin = 0, end = numsSize - 1;

    while (begin <= end) {
      int mid = begin + (begin - end) / 2;
      if (target == nums[mid])
        return mid;
      else if (target > nums[mid])
        begin = mid + 1;
      else if (target < nums[mid])
        end = mid - 1;
    }

    return -1;
}
// @lc code=end
