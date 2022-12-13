/*
 * @lc app=leetcode.cn id=19 lang=c
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *slow, *fast, *tmp, *dummy = calloc(1, sizeof(struct ListNode));
    dummy->next = head;
    slow = fast = dummy;
    int step = n + 1;
    while (step--) fast = fast->next;
    while (fast) {
        slow = slow->next;
        fast = fast->next;
    }
    tmp = slow->next;
    slow->next = tmp->next;
    free(tmp);
    return dummy->next;
}
// @lc code=end

