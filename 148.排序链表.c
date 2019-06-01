/*
 * @lc app=leetcode.cn id=148 lang=c
 *
 * [148] 排序链表
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



inline int count(struct ListNode *head){
    int index = 0;
    while(head){
        ++index;
        head = head->next;
    } 
    return index;
}

inline void insert_array(int arr[], struct ListNode *head){
    int index = 0;
    while(head){
        arr[index++] = head->val;
        head = head->next;
    }
}

void max_heap(int arr[], int index, int size){
    int left = (index + 1) * 2 - 1;
    int right = (index + 1) * 2;
    int tmp;
    int i = index;
    if(left < size && arr[i] < arr[left]){
        i = left;
    }
    if(right < size && arr[i] < arr[right]){
        i = right;
    }
    if(i != index){
        tmp = arr[i];
        arr[i] = arr[index];
        arr[index] = tmp;
        max_heap(arr, i, size);
    }
}

void build_max_heap(int arr[], int size){
    int i = floor(size / 2) - 1;
    while(i >= 0){
        max_heap(arr, i, size);
        --i;
    }
}

void sort_heap(int arr[], int size){
    int tmp = 0;
    build_max_heap(arr, size);
    while(size){
        tmp = arr[0];
        arr[0] = arr[size - 1];
        arr[size - 1] = tmp;
        max_heap(arr, 0, --size);
    }
}

void sort_list(int arr[], struct ListNode *head){
    int index = 0;
    while(head){
        head->val = arr[index++];
        head = head->next;
    }
}

struct ListNode* sortList(struct ListNode* head){
    int len = count(head);
    if(!len) return NULL;
    int *array = (int *)malloc(sizeof(int) * len);
    insert_array(array, head);
    sort_heap(array, len);
    int i = 0;
    sort_list(array, head);
    return head;
}



