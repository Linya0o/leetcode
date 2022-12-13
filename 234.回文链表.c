/*
 * @lc app=leetcode.cn id=234 lang=c
 *
 * [234] 回文链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverse(struct ListNode* head) {
    struct ListNode *tmp, *dummy = calloc(1, sizeof(struct ListNode));
    while (head) {
        tmp = head;
        head = head->next;
        tmp->next = dummy->next;
        dummy->next = tmp;
    }
    return dummy->next;
}

bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct ListNode *left = head, *right = reverse(slow);
    while (right) {
        if (left->val != right->val) return false;
        left = left->next;
        right = right->next;
    }
    return true;
}
// @lc code=end

