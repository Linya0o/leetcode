/*
 * @lc app=leetcode.cn id=344 lang=c
 *
 * [344] 反转字符串
 */

// @lc code=start


void reverseString(char* s, int sSize){
    int left = 0, right = sSize - 1, ch;
    while (left < right) {
        ch = s[left];
        s[left++] = s[right];
        s[right--] = ch;
    }
}
// @lc code=end

