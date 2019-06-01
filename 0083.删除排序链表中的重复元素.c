/*
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL) return head;
    struct ListNode *ret = head;
    struct ListNode *tmp = ret;
    while(head->next){
        if(head->next->val == tmp->val){
            head = head->next;
        }
        else{
            tmp->next = head->next;
            tmp = tmp->next;
            head = head->next;
        }
    }
    tmp->next = NULL;
    return ret;
}



