/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    struct ListNode *head, *cur, *tmp;
    if(l1->val > l2->val){
        head = l2;
        l2 = l2->next;
    }
    else{
        head = l1;
        l1 = l1->next;
    }
    cur = head;
    while(l1 != NULL && l2 != NULL){
        if(l1->val > l2->val){
            cur->next = l2;
            l2 = l2->next;
        }
        else{
            cur->next = l1;
            l1 = l1->next;
        }
        cur = cur->next;
    }
    if(l1){
        cur->next = l1;
    }
    else{
        cur->next = l2;
    }
    cur = head;
    while(cur){
        cur = cur->next;
    }
    return head;
}



