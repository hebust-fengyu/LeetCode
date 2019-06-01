/*
 * @lc app=leetcode.cn id=147 lang=c
 *
 * [147] 对链表进行插入排序
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* insertionSortList(struct ListNode* head){
    if(head == NULL) return NULL;
    if(head->next == NULL) return head;
    struct ListNode *tmp = insertionSortList(head->next);
    struct ListNode *ret = tmp;
    if(tmp->val >= head->val){
        head->next = tmp;
        return head;
    }
    while(tmp->next && tmp->next->val < head->val) tmp = tmp->next;
    if(head->next == NULL){
        tmp->next = head;
        head->next = NULL;
        return ret;
    }
    head->next = tmp->next;
    tmp->next = head;
    return ret;
    
}



