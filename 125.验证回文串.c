/*
 * @lc app=leetcode.cn id=125 lang=c
 *
 * [125] 验证回文串
 */

// @lc code=start
bool isPalindrome(char * s){
    // cleaning string
    int slow = 0, fast = 0;
    while (s[fast]) {
        if (isalnum(s[fast])) s[slow++] = tolower(s[fast]);
        fast++;
    }
    // validatation
    int left = 0, right = slow - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        else { left++; right--; }
    }
    return true;
}
// @lc code=end

