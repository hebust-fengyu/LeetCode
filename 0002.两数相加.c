/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    struct ListNode *head, *ret;
    int flag = 0;
    ret = head = NULL;
    while(l1 && l2){
        struct ListNode *tmp = malloc(sizeof(struct ListNode));
        tmp -> val = l1 -> val + l2 -> val + flag;
        flag = tmp->val / 10;
        tmp->val %= 10;
        tmp -> next = NULL;
        if(ret == NULL)
            ret = tmp;
        if(head == NULL)
            head = tmp;
        else
        {
            head -> next = tmp;
            head = tmp;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    while(l1){
        struct ListNode *tmp = malloc(sizeof(struct ListNode));
        tmp -> next = NULL;
        tmp-> val = l1->val + flag;
        flag = tmp->val / 10;
        tmp->val %= 10;
        head->next = tmp;
        l1 = l1 -> next;
        head = tmp;
    }
    while(l2){
        struct ListNode *tmp = malloc(sizeof(struct ListNode));
        tmp->next = NULL;
        tmp->val = l2->val + flag;
        flag = tmp->val / 10;
        tmp->val %= 10;
        head->next = tmp;
        l2 = l2->next;
        head = tmp;
    }
    if(flag){
        head->next = malloc(sizeof(struct ListNode));
        head->next->val = flag;
        head->next->next = NULL;
    }
    return ret;
}



