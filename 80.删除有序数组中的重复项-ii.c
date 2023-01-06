/*
 * @lc app=leetcode.cn id=80 lang=c
 *
 * [80] 删除有序数组中的重复项 II
 */

// @lc code=start


int removeDuplicates(int* nums, int numsSize){
    if (numsSize <= 2) return numsSize;

    int slow = 2, fast = 2;
    while (fast < numsSize) {
        if (nums[slow - 2] != nums[fast]) {
            nums[slow++] = nums[fast];
        }
        fast++;
    }
    return slow;
}
// @lc code=end

