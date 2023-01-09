/*
 * @lc app=leetcode.cn id=82 lang=c
 *
 * [82] 删除排序链表中的重复元素 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (!head) return head;

    struct ListNode *dummy = malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode *pre = dummy, *cur = head;
    while (cur && cur->next) {
        if (cur->val == cur->next->val) {
            int e = cur->val;
            while (cur && cur->val == e) {
                pre->next = cur->next;
                free(cur);
                cur = pre->next;
            }
        } else {
            pre = pre->next;
            cur = cur->next;
        }
    }
    return dummy->next;
}
// @lc code=end

