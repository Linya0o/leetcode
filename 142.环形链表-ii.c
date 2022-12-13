/*
 * @lc app=leetcode.cn id=142 lang=c
 *
 * [142] 环形链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow = head, *fast = head;
    while (true) {
        if (!fast || !fast->next) return NULL;
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }
    slow = head;
    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
// @lc code=end

