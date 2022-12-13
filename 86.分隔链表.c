/*
 * @lc app=leetcode.cn id=86 lang=c
 *
 * [86] 分隔链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode *small, *large, *p1, *p2;
    small = p1 = calloc(1, sizeof(struct ListNode));
    large = p2 = calloc(1, sizeof(struct ListNode));

    while (head) {
        if (head->val < x) {
            p1->next = head;
            p1 = p1->next;
        } else {
            p2->next = head;
            p2 = p2->next;
        }
        // struct ListNode *tmp = head->next;   // 不必每次都处理已经访问过的节点
        // head->next = NULL;                   // 其实对于已经访问过的节点的next域将在下次迭代中被重新赋值
        // head = tmp;                          // 只需要在最后处理small和large链表的尾节点的next域
        head = head->next;
    }
    p1->next = large->next;
    p2->next = NULL;
    return small->next;
}
// @lc code=end

