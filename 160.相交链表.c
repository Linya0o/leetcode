/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p1 = headA, *p2 = headB;

    while (p1 != p2) {
        if (p1) p1 = p1->next; else p1 = headB;
        if (p2) p2 = p2->next; else p2 = headA;
    }
    return p1;
}
// @lc code=end

