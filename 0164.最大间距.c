/*
 * @lc app=leetcode.cn id=164 lang=c
 *
 * [164] 最大间距
 */


typedef struct lls {
	struct lls* prev;
	int val;
	struct lls* next;
}ls;


ls* insert_ls(ls* head, ls* tmp) {
	ls* ret = head;
	while (head->next && head->val < tmp->val)
	{
		head = head->next;
	}
	if (head->val >= tmp->val) {
		if (head->prev == NULL) {
			tmp->next = head;
			head->prev = tmp;
			ret = tmp;
		}
		else {
			head->prev->next = tmp;
			tmp->next = head;
			tmp->prev = head->prev;
			head->prev = tmp;
		}
		
	}
	else {
		head->next = tmp;
		tmp->prev = head;
	}
	return ret;
}

int maximumGap(int* nums, int numsSize) {
	if (numsSize < 2) return 0;
	ls* head, * trval, * tmp;
	head = trval = (ls*)malloc(sizeof(ls));
	trval->val = nums[0];
	trval->prev = NULL;
	trval->next = NULL;
	for (int i = 1; i < numsSize; ++i) {
		tmp = (ls*)malloc(sizeof(ls));
		tmp->val = nums[i];
		tmp->next = NULL;
		tmp->prev = NULL;
		head = insert_ls(head, tmp);
	}
	int* array = (int*)malloc(sizeof(int) * (numsSize - 1));
	for (int i = 0; i < numsSize - 1; ++i) {
		array[i] = head->next->val - head->val;
		head = head->next;
	}
	int max = array[0];
	for (int i = 1; i < numsSize - 1; ++i)
		max = array[i] > max ? array[i] : max;
	return max;

}