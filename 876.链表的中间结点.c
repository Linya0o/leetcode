/*
 * @lc app=leetcode.cn id=876 lang=c
 *
 * [876] 链表的中间结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *ans = head;
    while (head && head->next) {
        ans = ans->next;
        head = head->next->next;
    }
    return ans;
}
// @lc code=end

