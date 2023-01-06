/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start


int removeDuplicates(int* nums, int numsSize){
    int slow = 0, fast = 1;
    while (fast < numsSize) {
        if (nums[slow] != nums[fast]) {
            nums[++slow] = nums[fast];
        }
        fast++;
    }
    return slow + 1;
}
// @lc code=end

